#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)53;
unsigned long long int var_2 = 5081066191973462878ULL;
unsigned short var_5 = (unsigned short)24347;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 1564110858U;
int zero = 0;
unsigned long long int var_19 = 1267602698829079635ULL;
short var_20 = (short)-18293;
unsigned short var_21 = (unsigned short)52063;
unsigned short var_22 = (unsigned short)57727;
int var_23 = 1077270201;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
