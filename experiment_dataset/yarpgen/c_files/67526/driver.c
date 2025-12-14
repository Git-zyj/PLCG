#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12251;
unsigned char var_2 = (unsigned char)111;
unsigned int var_4 = 668543583U;
signed char var_6 = (signed char)-58;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3893261883U;
signed char var_10 = (signed char)28;
short var_11 = (short)10638;
int zero = 0;
unsigned long long int var_12 = 1628755518640633805ULL;
signed char var_13 = (signed char)-48;
signed char var_14 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
