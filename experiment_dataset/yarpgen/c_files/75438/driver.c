#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24795;
unsigned long long int var_6 = 5446749078379079293ULL;
int var_7 = -482087190;
int var_11 = -2059127738;
unsigned long long int var_12 = 4431996435838603702ULL;
long long int var_17 = -2517703313895223118LL;
int zero = 0;
long long int var_20 = -6166065005541373784LL;
unsigned long long int var_21 = 14775867806411135407ULL;
long long int var_22 = -2087165937528752149LL;
long long int var_23 = 5955048212807941331LL;
long long int var_24 = 3244994132275031388LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
