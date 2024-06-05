#pragma once
#include <SFML\Graphics.hpp>

class Colicionable {
public:
    // M�todo virtual puro para obtener los l�mites del objeto
    virtual sf::FloatRect getBounds() const = 0;

    // M�todo para verificar la colisi�n
    bool Colision(const Colicionable& col) const;
};