#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9174375688556852625LL;
int var_3 = 376065521;
unsigned long long int var_4 = 13631117916782693311ULL;
unsigned int var_8 = 2338014072U;
unsigned long long int var_9 = 5616199304419563764ULL;
short var_10 = (short)-1809;
long long int var_12 = -5980056087401575989LL;
int zero = 0;
unsigned char var_13 = (unsigned char)11;
unsigned long long int var_14 = 9456424526493413409ULL;
unsigned long long int var_15 = 5537736921519096762ULL;
short var_16 = (short)-2401;
unsigned short var_17 = (unsigned short)5522;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
