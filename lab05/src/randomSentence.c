#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// add text files as an array
const char *articles[] = {
    #include "articles.txt"
};

const char *adjectives[] = {
    #include "adjectives.txt"
};

const char *noun[] = {
    #include "noun.txt"
};

const char *verb[] = {
    #include "verb.txt"
};

const char *adverb[] = {
    #include "adverb.txt"
};

int main(void){

// find size of each array
int articles_count = sizeof(articles) / sizeof(articles[0]);
int adjectives_count = sizeof(adjectives) / sizeof(adjectives[0]);
int noun_count = sizeof(noun) / sizeof(noun[0]);
int verb_count = sizeof(verb) / sizeof(verb[0]);
int adverb_count = sizeof(adverb) / sizeof(adverb[0]);

// sets to current time
srand(time(NULL));

// generate random indexes
int rand_article = rand() % articles_count;
int rand_adjective = rand() % adjectives_count;
int rand_noun = rand() % noun_count;
int rand_verb = rand() % verb_count;
int rand_adverb = rand() % adverb_count;

// print random sentence
printf("%s %s %s %s %s.\n", articles[rand_article], adjectives[rand_adjective], noun[rand_noun], verb[rand_verb], adverb[rand_adverb]);
return 0;
}