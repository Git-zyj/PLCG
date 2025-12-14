#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21121;
long long int var_6 = 8813225595162588438LL;
long long int var_8 = -4999816710226676238LL;
int zero = 0;
int var_10 = 398857603;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 2115218415835798502ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
