/*
* Declarations for a calculator fb3-1
*/
/* interface to the lexer */
extern int yylineno; /* from lexer */
void yyerror(char *s, ...);
int yyparse(void);
int yylex(void);
/* nodes in the abstract syntax tree */
struct ast {
    int nodetype;
    struct ast *l;
    struct ast *r;
};
struct numval {
    int nodetype; /* type K for constant */
    double number;
};
/* build an AST */
struct ast *newast(int nodetype, struct ast *l, struct ast *r);
struct ast *newnum(double d);
/* evaluate an AST */
double eval(struct ast *);
/* delete and free an AST */
void treefree(struct ast *);
