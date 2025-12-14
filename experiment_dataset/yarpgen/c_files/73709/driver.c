#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)43;
_Bool var_5 = (_Bool)0;
int var_6 = -502623255;
unsigned int var_7 = 56538519U;
unsigned char var_10 = (unsigned char)19;
int zero = 0;
unsigned long long int var_12 = 6328392720529165661ULL;
long long int var_13 = 5357273037136612941LL;
int var_14 = 1160487855;
signed char var_15 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
