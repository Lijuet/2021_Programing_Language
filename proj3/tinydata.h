#define NSYMS 30

struct SymbolTable {
    char *id;
    int type; // identifier int/bool/char (as value itself when vairable or return type when procedure)
    // int valueType; 
    char *charV;
    int intV;
    int paramCnt;
    struct SymbolTable *paramTable;
    struct Node *procedureRootNode;
};

struct SymbolTable mainTable[NSYMS];
int makeVariableSymbol(char* name);
int makeProcedureSymbol(struct Node* root);
int lookUpMainTable(char* name);
int lookUpParameter(char *ID);
void InitParameters(struct Node* parameter_list, struct SymbolTable *paramTable);

struct Node {
    char* name;
    int type;                   //All
    int intV;
    char* oper;
    int valueType;
    struct Node *left;          //A
    struct Node *middle;
    struct Node *right;
    struct SymbolTable *symbol; //A,V
    struct Node *procedureRoot;
};

struct Node *root=NULL;

struct Node* makeNode(int type, struct Node *left, struct Node *right);
struct Node* makeVariableNode(char* name);
struct Node* makeProcedureNode(char* name);
void traverse(Node *_node);

struct CurProcedure {
    struct SymbolTable *symbol;
    struct CurProcedure *stack;
    struct Node *paraTable[10];

    union {
        int intV;
        char *charV;
    } value;
    int valueType;

};

enum ERROR { NO_MAIN, ASSIGN_TYPE_NOT_MATCH, ASSIGN_TO_UNDEFINED };
void printError(enum ERROR ERROR_CODE);