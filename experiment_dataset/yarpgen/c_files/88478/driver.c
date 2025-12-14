#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4429;
long long int var_2 = 1669329600120377317LL;
long long int var_3 = 6327257013177258190LL;
long long int var_5 = -376266736896072710LL;
long long int var_6 = -6217403109181611200LL;
short var_11 = (short)8678;
unsigned long long int var_12 = 6142565753680272068ULL;
long long int var_14 = 2896786389257250844LL;
unsigned long long int var_16 = 1820834010653612482ULL;
int zero = 0;
long long int var_17 = -343105662574908089LL;
long long int var_18 = 3735494912299629278LL;
unsigned long long int var_19 = 18236622557335256648ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
