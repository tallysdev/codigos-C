typedef struct mu Mu;
typedef struct dinan Dinan;

struct mu
{
    char nome [51];
    char tipo [25];
    char status;
    char sexo;
    int idade;

}

struct dinan
{
    char nome [51];
    char tipo [25];
    char status;
    char sexo;
    int idade;
    Dinan* prox;
}

void menu (void);
void cadastrar (void);
void listar(void);
void editar(void);
void excluir(void);
void buscar(void);
void gravar(Mu* bovinos);
void mostrar(Mu* bovinos);