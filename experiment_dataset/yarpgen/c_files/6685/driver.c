#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1650612652;
signed char var_6 = (signed char)-2;
unsigned short var_9 = (unsigned short)61058;
signed char var_12 = (signed char)113;
_Bool var_15 = (_Bool)0;
unsigned int var_19 = 4050530236U;
int zero = 0;
unsigned char var_20 = (unsigned char)139;
int var_21 = 1737826642;
_Bool var_22 = (_Bool)0;
int var_23 = -693034640;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
