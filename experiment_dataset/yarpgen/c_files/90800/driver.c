#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10678438051231799428ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-124;
unsigned short var_9 = (unsigned short)21598;
int zero = 0;
short var_11 = (short)-27141;
unsigned char var_12 = (unsigned char)179;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
