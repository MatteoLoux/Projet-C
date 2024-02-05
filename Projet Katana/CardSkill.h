#pragma once
#ifndef HEADER_CARD_SKILL
#define HEADER_CARD_SKILL

//Description des capacit�s sp�ciales des personnages
#define HANZO_S "Vous pouvez jouer vos cartes d�arme comme des (� moins que �a ne soit votre derni�re carte en main).Vous pouvez aussi utiliser cette capacit� contre un Cri de guerre."
#define BENKAI_S "les autres joueurs vous attaquent avec une difficult� augment�e de 1."
#define CHIYOME_S "seules les armes peuvent vous faire perdre des points de vie.Vous n��tes donc pas affect� par Cri de guerre ou Ju Jitsu."
#define GINCHIYO_S "vous r�duisez de 1 les d�g�ts des armes (minimum 1). Par exemple, un Nodachi vous cause 2 d�g�ts au lieu de 3 mais un Shuriken vous cause tout de m�me 1 d�g�t."
#define	GOEMON_S "vous pouvez jouer 1 arme suppl�mentaire par tour. Par exemple, si vous avez une carte Concentration en jeu, vous pouvez jouer 3 armes par tour."
#define HIDEYOSHI_S "durant votre phase de pioche, piochez 1 carte suppl�mentaire (donc normalement 3 cartes au lieu de 2)."
#define IEYASU_S "durant votre phase de pioche, vous pouvez prendre la carte du dessus de la d�fausse au lieu de piocher votre premi�re carte.Vous devez piocher normalement la deuxi�me(et les suivantes si besoin)."
#define	KOJIRO_S "vos armes peuvent attaquer n�importe quel autre joueur sans tenir compte de la difficult�."
#define	MUSASHI_S "vos armes causent 1 d�g�t suppl�mentaire. N�augmente par les d�g�ts des autres cartes(Ju Jitsu par exemple)."
#define	NOBUNAGA_S "durant votre tour, vous pouvez perdre 1 point de vie (sauf votre dernier) pour piocher 1 carte."
#define	TOMOE_S "chaque fois qu�une de vos armes blesse un joueur, piochez 1 carte.Ne piochez qu�une seule carte par attaque, m�me si votre arme cause plusieurs points de d�g�ts."
#define USHIWAKA_S "chaque fois que vous perdez 1 point de vie � cause d�une arme, piochez 1 carte(donc si vous perdez 3 points de vie, vous piochez 3 cartes).	"

//Description des cartes actions
#define CRI_DE_GUERRE "Les joueurs doivent d�fausser 1 (symbole deux bras en x ) ou perdre 1 poitns de vie, Les joueurs � terre ne sont pas affect�s par cette carte"
#define	DAIMYO "iocher 2 cartes, si vous poss�der cette carte a la fin de la partie, elle vous rapporte 1 point d'honneur"
#define	DIVERSION "Piochez au hasard 1 carte dans la main d'un joueur de votre choix et ajoutez la a votre main"
#define GEAISHA "defausser 1 carte permanente en jeu ou 1 carte au hasard de la main d'un autre joueur"
#define MEDITATION "R�cup�rer tous vos points de vie. Un autre joueur de votre choix pioche 1 carte"
#define	PARADE "(symbole deux bras en x ) (permet de se proteger d'un attaque d'une arme)"
#define	CEREMONIE_DU_THE "Piochez 3 cartes. Les autres joueur piochent 1 carte."
#define	JUJITSU "Les autres joueurs doivent d�faussez 1 armes ou perdre 1 point de vie"

//Description des cartes permanentes
#define ATTAQUE_RAPIDE "Vos armes causent 1 d�gats suppl�mentaire"
#define	CODE_DU_BUSHIDO "� la diff�rence des autres cartes permanentes, le Code du bushido peut �tre plac� devant n�importe quel joueur. Si cette carte se trouve devant vous � la fin de votre phase de r�cup�ration, retournez la carte du dessus la pioche et d�faussez - la.L�effet du Code du bushido d�pend de la nature de la carte retourn�e : Si c�est une arme, d�faussez 1 arme et passez Code du bushido � votre voisin de gauche, ou perdez 1 point d�honneur et d�faussez Code du bushido. Si ce n�est pas une arme, passez Code du bushido � votre voisin de gauche. Il ne peut y avoir qu�un seul Code du bushido en jeu en m�me temps"
#define	ARMURE "Les autres joueurs vous attaquent avec une difficult� augment� de 1 ( la range d'attaque que pour nous augmente de 1 les autres reste comme ils sont )"
#define	CONCENTRATION "Vous pouvez jouer 1 arme de plus par tour"


#endif
