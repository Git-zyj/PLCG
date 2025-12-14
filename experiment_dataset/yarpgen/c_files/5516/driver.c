#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_17 = (unsigned short)12733;
unsigned short var_18 = (unsigned short)51935;
unsigned int var_19 = 3299251101U;
unsigned short var_20 = (unsigned short)37370;
unsigned short var_21 = (unsigned short)43026;
unsigned int var_22 = 1194455419U;
signed char var_23 = (signed char)-74;
long long int var_24 = 1693899988754548245LL;
unsigned long long int var_25 = 8085448614138034552ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
