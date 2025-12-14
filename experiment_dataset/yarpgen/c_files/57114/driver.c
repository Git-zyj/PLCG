#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17219580381647931296ULL;
_Bool var_4 = (_Bool)0;
short var_6 = (short)22035;
unsigned char var_8 = (unsigned char)178;
unsigned char var_12 = (unsigned char)95;
unsigned short var_14 = (unsigned short)62469;
int zero = 0;
unsigned char var_16 = (unsigned char)106;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
