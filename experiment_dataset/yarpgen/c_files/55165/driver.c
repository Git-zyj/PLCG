#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15968504530539052973ULL;
unsigned char var_2 = (unsigned char)60;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3685920394U;
int var_13 = -237851286;
int zero = 0;
unsigned char var_15 = (unsigned char)156;
unsigned char var_16 = (unsigned char)200;
int var_17 = -1994826146;
long long int var_18 = 6767396394081137917LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
