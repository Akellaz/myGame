#include<SFML/Graphics.hpp>
using namespace sf;

int main() {


RenderWindow window(VideoMode(640, 480), "Hello!");

Texture heroTexture;
heroTexture.loadFromFile("images/hero.png");

Sprite heroSprite;
heroSprite.setTexture(heroTexture);
heroSprite.setTextureRect(IntRect(0, 192, 96, 96));
heroSprite.setPosition(50, 25);

while (window.isOpen())
{
Event event;
while (window.pollEvent(event))
{
if (event.type == Event::Closed)
	window.close();
}
if (Keyboard::isKeyPressed(Keyboard::Left)){heroSprite.move(-0.1, 0.0);  }
if (Keyboard::isKeyPressed(Keyboard::Right)) {heroSprite.move(0.1, 0.0); }
if (Keyboard::isKeyPressed(Keyboard::Up)) {heroSprite.move(0.0, -0.1); }
if (Keyboard::isKeyPressed(Keyboard::Down)) {heroSprite.move(0.0, 0.1); } 


window.clear();
window.draw(heroSprite);
window.display();
}
	return 0;
}
