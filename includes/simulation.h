#ifndef SIMULATION_H
#define SIMULATION_H
#include "menu.h"
#include <vector>



// Classe d�finissant la simulation

class Simulation
{

public:

	bool				is_day;			// D�finit si on prend en compte le jour de naissance
	sf::Text			text_total;		// Texte : "Nombre de cas :"
	sf::Text			text_denom;		// Texte : "L'un est un gar�on :"
	sf::Text			text_num;		// Texte : "L'autre est un gar�on :"
	sf::Text			text_ratio;		// Texte : "Probabilit� :"
	int					nb_total;		// Nombre de cas �tudi�s 
	int					nb_denom;		// Nombre de cas o� l'un est un gar�on
	int					nb_num;			// Nombre de cas o� l'autre est un gar�on
	double				nb_ratio;		// Probabilit�
	sf::Text			nb_text_total;	// Texte affichant le nombre de cas �tudi�s
	sf::Text			nb_text_denom;	// Texte affichant le nombre de cas o� l'un est un gar�on (ou est n� un mardi)
	sf::Text			nb_text_num;	// Texte affichant le nombre de cas o� l'autre est un gar�on
	sf::Text			nb_text_ratio;	// Texte affichant la probabilit�
	sf::RenderTexture	texture;		// La texture sur laquelle sont dessin�s les pixels
	sf::Sprite			sprite;			// Le sprite servant � afficher la texture

	Simulation();
	Simulation(const Menu& menu);

	void restart(const Menu& menu);
	void draw_simulation(const Menu& menu);
	void update_without_day();
	void update_with_day();
	void update();
	void draw(sf::RenderWindow& window, const Menu& menu);
};

#endif