#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
signed char var_3 = (signed char)84;
signed char var_5 = (signed char)11;
signed char var_6 = (signed char)-124;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)203;
unsigned short var_11 = (unsigned short)7524;
unsigned char var_12 = (unsigned char)4;
unsigned char var_13 = (unsigned char)111;
unsigned char var_14 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
