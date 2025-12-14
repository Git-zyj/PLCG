#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
unsigned char var_1 = (unsigned char)229;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)196;
unsigned int var_8 = 2188884544U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int var_15 = -1585539771;
short var_17 = (short)-24907;
long long int var_18 = 6405078064020236754LL;
int zero = 0;
unsigned short var_20 = (unsigned short)20030;
unsigned char var_21 = (unsigned char)182;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)15;
int var_24 = 79220983;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
