#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1192786901;
int var_3 = -707013408;
unsigned short var_4 = (unsigned short)7914;
signed char var_6 = (signed char)69;
unsigned char var_9 = (unsigned char)159;
signed char var_13 = (signed char)-47;
unsigned short var_16 = (unsigned short)50267;
int zero = 0;
unsigned char var_18 = (unsigned char)19;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
