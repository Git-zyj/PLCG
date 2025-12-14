#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)193;
short var_16 = (short)-8035;
unsigned char var_17 = (unsigned char)194;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)105;
unsigned int var_21 = 4163250684U;
signed char var_22 = (signed char)-50;
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
