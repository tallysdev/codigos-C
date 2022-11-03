typedef struct mu Mu;

struct mu
{
    char nome [51];
    char tipo [25];
    char status;
    char sexo;
    int idade;

};

void menu (void);
void cadastrar (void);
void listar(void);
void gravar(Mu* bovinos);
void mostrar(Mu* bovinos);