#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2301958247948801745LL;
short var_2 = (short)-16852;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_13 = -856301066471841256LL;
unsigned char var_14 = (unsigned char)73;
unsigned short var_15 = (unsigned short)61330;
unsigned char var_16 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
