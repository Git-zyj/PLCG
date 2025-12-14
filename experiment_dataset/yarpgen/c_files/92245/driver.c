#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 627605761081358643ULL;
signed char var_5 = (signed char)5;
unsigned short var_6 = (unsigned short)13807;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-90;
short var_11 = (short)-14678;
unsigned char var_12 = (unsigned char)232;
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
