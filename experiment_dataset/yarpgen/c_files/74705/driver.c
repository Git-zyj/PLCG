#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -431508038;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)160;
int zero = 0;
signed char var_10 = (signed char)-84;
long long int var_11 = -3138864441313532551LL;
unsigned long long int var_12 = 2869138386999463603ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
