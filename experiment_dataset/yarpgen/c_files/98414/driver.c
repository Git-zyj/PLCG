#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17252391987657629226ULL;
unsigned char var_3 = (unsigned char)194;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 713011216U;
short var_11 = (short)-17927;
unsigned short var_12 = (unsigned short)50079;
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
