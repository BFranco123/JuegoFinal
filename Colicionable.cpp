#include "Colicionable.h"


// Implementaci�n del m�todo de colisi�n
bool Colicionable::Colision(const Colicionable& obj) const {
    return getBounds().intersects(obj.getBounds());
}