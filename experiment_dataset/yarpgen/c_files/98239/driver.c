#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7954887759696513858LL;
signed char var_1 = (signed char)41;
unsigned long long int var_2 = 668470845998350924ULL;
unsigned int var_4 = 4144602348U;
unsigned char var_5 = (unsigned char)191;
signed char var_6 = (signed char)-20;
signed char var_7 = (signed char)69;
int var_8 = 1478636557;
long long int var_9 = 4043386457162897663LL;
unsigned long long int var_10 = 5193391863997751027ULL;
int zero = 0;
int var_11 = 12944747;
long long int var_12 = -6437990228509963113LL;
signed char var_13 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
