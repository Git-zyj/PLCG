#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7610;
_Bool var_1 = (_Bool)0;
long long int var_6 = -4169474381001618829LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)188;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_11 = -2094579770;
short var_12 = (short)-18229;
signed char var_13 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
