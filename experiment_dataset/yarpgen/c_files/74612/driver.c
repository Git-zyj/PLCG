#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
long long int var_1 = -8344419359272009681LL;
unsigned char var_2 = (unsigned char)162;
unsigned char var_3 = (unsigned char)234;
short var_9 = (short)5405;
long long int var_11 = -7404993114154666915LL;
long long int var_15 = 6600579423151817350LL;
int zero = 0;
long long int var_16 = -7202736127730185262LL;
unsigned short var_17 = (unsigned short)18764;
long long int var_18 = -2657500052678305159LL;
short var_19 = (short)-17060;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
