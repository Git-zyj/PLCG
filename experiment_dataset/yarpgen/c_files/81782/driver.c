#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32884;
unsigned int var_1 = 3816046381U;
unsigned int var_2 = 34006432U;
unsigned short var_3 = (unsigned short)7662;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1197810429U;
unsigned char var_11 = (unsigned char)202;
long long int var_12 = -7931801297047731525LL;
int zero = 0;
signed char var_14 = (signed char)-90;
unsigned char var_15 = (unsigned char)69;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
