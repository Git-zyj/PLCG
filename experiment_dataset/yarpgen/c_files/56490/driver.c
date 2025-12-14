#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62032;
unsigned char var_4 = (unsigned char)18;
unsigned short var_6 = (unsigned short)43049;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-10577;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-62;
unsigned int var_14 = 3612434102U;
signed char var_15 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
