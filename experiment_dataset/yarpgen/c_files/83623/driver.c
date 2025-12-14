#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
short var_2 = (short)-12712;
signed char var_3 = (signed char)106;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 1108829237U;
unsigned int var_7 = 3442116300U;
unsigned long long int var_8 = 16221541283757599049ULL;
unsigned char var_9 = (unsigned char)129;
long long int var_10 = 2480980577989059296LL;
unsigned short var_11 = (unsigned short)42794;
signed char var_12 = (signed char)13;
int zero = 0;
unsigned int var_13 = 1791162462U;
short var_14 = (short)12022;
signed char var_15 = (signed char)-102;
int var_16 = -68331434;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
