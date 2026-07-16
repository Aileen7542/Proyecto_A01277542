# Diagrama UML

```mermaid
classDiagram
    class Personaje {
        - vidaMax : float
        - salud : float
        - ataque : float
        - nivel : int

        + porcentajeSalud() int
        + imprimeBarra() void
        + calculaAtaque(otroPersonaje : Personaje) int
        + recibeAtaque(ptosAtaque : int) void
        + atacar(otroPersonaje : Personaje) void
        + imprime() void
    }

    class Caballero {
        - agilidad : float
        - escudo : int

        + calculaAtaque(otroPersonaje : Personaje) int
        + recibeAtaque(ptosAtaque : int) void
        + imprime() void
    }

    class Guerrero {
        - fuerza : int

        + calculaAtaque(otroPersonaje : Personaje) int
        + recibeAtaque(ptosAtaque : int) void
        + imprime() void
    }

    class Hechicero {
        - magia : float

        + calculaAtaque(otroPersonaje : Personaje) int
        + recibeAtaque(ptosAtaque : int) void
        + imprime() void
    }

    Personaje <|-- Caballero
    Personaje <|-- Guerrero
    Personaje <|-- Hechicero
```
