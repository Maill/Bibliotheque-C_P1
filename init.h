#ifndef INIT_H_INCLUDED
#define INIT_H_INCLUDED

struct Library {
	char letter; //Premi�re lettre des mots du tableau
	int capacity;
	int size; //Taille du dictionnaire
	char** words; //Tableau de mots
};

typedef struct Library Lib;


struct Program {
	char* loadedFileName;
	FILE* f;
	Lib* dictionary;
	int totalWords;
};

typedef struct Program Program;

//Protorypes main.c
void FileMenu(Program*);
void LoadFile(Program*);

//Prototypes gestBib.c
//  - Load Lib
void InitLibrary(Program*);
void FillDicoFromFile(Program*);
//  - Lib's operations
void CountTotalWords(Program*);
void ToLowerCase(char*);
void SortDico(Program*, int);

//Prototypes gestFile.c
void CreateFile(Program*);

#endif // INIT_H_INCLUDED
