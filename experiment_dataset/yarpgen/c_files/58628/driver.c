#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11294038417502878340ULL;
int var_4 = 422458866;
int var_5 = 1661049080;
unsigned short var_8 = (unsigned short)22988;
short var_9 = (short)-27699;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)78;
int zero = 0;
signed char var_13 = (signed char)-44;
unsigned short var_14 = (unsigned short)12168;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
