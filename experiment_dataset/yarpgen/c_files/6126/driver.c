#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2423525709003062885ULL;
int var_6 = 925610220;
long long int var_8 = 1229010826305746655LL;
unsigned short var_9 = (unsigned short)59478;
int var_12 = -861843324;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 112832065U;
int var_16 = 702384561;
unsigned char var_18 = (unsigned char)188;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-88;
unsigned char var_22 = (unsigned char)48;
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
