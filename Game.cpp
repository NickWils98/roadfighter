//
// Created by nick on 14.12.18.
//

#include "Game.h"

Game::Game()
        :   m_window    (sf::VideoMode(514, 431), "ROADFIGHTER",  sf::Style::Close | sf::Style::Resize),
            view(m_window.getDefaultView()) {

    m_window.setFramerateLimit(60);
    world = std::make_shared<World>();
}

    Game::~Game() {

}

void Game::run() {
    //Main loop of the game
    sf::Clock timer;
    while (m_window.isOpen()) {

        //Render
        m_window.clear();
        m_window.setView(view);
        m_window.display();

        //Handle window events
        handleEvent();
    }
}


void Game::handleEvent() {
    sf::Event evnt;

    while (m_window.pollEvent(evnt)) {
        switch (evnt.type) {
            case sf::Event::Closed:
                m_window.close();
                break;
            case sf::Event::Resized:
                break;
            default:
                break;

        }
    }
}