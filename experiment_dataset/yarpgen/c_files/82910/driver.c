#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3944871487306132563LL;
unsigned char var_11 = (unsigned char)208;
unsigned long long int var_12 = 10551007941206336918ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_18 = (unsigned char)132;
unsigned char var_19 = (unsigned char)34;
int zero = 0;
unsigned int var_20 = 1630863160U;
unsigned short var_21 = (unsigned short)1332;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
