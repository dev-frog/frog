#ifndef FROG_TOKEN_H
#define FROG_TOKEN_H

struct _TOKEN{
    int data;
    int type;
    int line;

};

typedef struct _TOKEN Token;


#endif // FROG_TOKEN_H