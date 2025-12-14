#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10985855501091535833ULL;
unsigned long long int var_5 = 16458343414042248102ULL;
unsigned char var_10 = (unsigned char)73;
long long int var_11 = -4622310761926986347LL;
int zero = 0;
unsigned long long int var_14 = 18370357308239417752ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-106;
void init() {
}

void checksum() {
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
