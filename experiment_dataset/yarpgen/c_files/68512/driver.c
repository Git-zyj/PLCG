#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)152;
unsigned char var_7 = (unsigned char)115;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)12861;
unsigned char var_12 = (unsigned char)2;
int var_15 = -355067305;
int zero = 0;
unsigned char var_17 = (unsigned char)46;
unsigned long long int var_18 = 12347600263859039930ULL;
signed char var_19 = (signed char)-49;
void init() {
}

void checksum() {
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
