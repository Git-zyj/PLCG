#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)151;
short var_2 = (short)11225;
short var_4 = (short)-13588;
signed char var_5 = (signed char)32;
unsigned int var_7 = 4093175934U;
short var_11 = (short)-27921;
short var_12 = (short)-18064;
unsigned short var_13 = (unsigned short)62900;
int zero = 0;
short var_14 = (short)-10072;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
