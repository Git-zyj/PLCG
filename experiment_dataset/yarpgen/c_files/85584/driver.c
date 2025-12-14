#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -5905095125276878856LL;
unsigned short var_3 = (unsigned short)29070;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)58071;
int zero = 0;
short var_10 = (short)21435;
unsigned long long int var_11 = 11595593728267278880ULL;
unsigned char var_12 = (unsigned char)252;
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
