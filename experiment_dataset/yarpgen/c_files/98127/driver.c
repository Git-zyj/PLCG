#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2296987094U;
short var_6 = (short)-16330;
short var_7 = (short)-10544;
unsigned char var_8 = (unsigned char)206;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 2559030382873379820ULL;
unsigned long long int var_12 = 6888049130630895767ULL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
