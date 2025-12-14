#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)89;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)41;
unsigned char var_11 = (unsigned char)188;
unsigned char var_15 = (unsigned char)74;
int zero = 0;
unsigned char var_16 = (unsigned char)65;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)200;
int var_19 = 1326788224;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
