#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5491312672068155465LL;
unsigned short var_1 = (unsigned short)21873;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)55563;
signed char var_5 = (signed char)-65;
unsigned short var_8 = (unsigned short)28837;
unsigned long long int var_9 = 8435828878611292380ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)137;
unsigned char var_13 = (unsigned char)53;
unsigned short var_14 = (unsigned short)38109;
unsigned short var_15 = (unsigned short)32877;
int var_16 = -1745671293;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
