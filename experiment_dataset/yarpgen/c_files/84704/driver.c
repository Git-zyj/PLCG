#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1755236340;
short var_5 = (short)10151;
unsigned short var_9 = (unsigned short)20642;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)24620;
unsigned short var_17 = (unsigned short)34252;
unsigned long long int var_18 = 16791020978837434591ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 729006952615108143ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
