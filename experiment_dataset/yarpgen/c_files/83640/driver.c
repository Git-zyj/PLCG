#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2746547701571497558LL;
_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)15;
short var_12 = (short)22067;
unsigned short var_14 = (unsigned short)34884;
unsigned int var_15 = 4148905580U;
unsigned char var_19 = (unsigned char)45;
int zero = 0;
unsigned char var_20 = (unsigned char)111;
long long int var_21 = -1199969480719914406LL;
signed char var_22 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
