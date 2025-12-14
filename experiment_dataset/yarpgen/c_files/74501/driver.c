#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2498804806842482160ULL;
unsigned long long int var_2 = 9626289354116131117ULL;
long long int var_15 = -2527201644474197524LL;
int zero = 0;
unsigned int var_19 = 2930331334U;
unsigned short var_20 = (unsigned short)864;
unsigned long long int var_21 = 6937126069142311122ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
