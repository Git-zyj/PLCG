#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)63;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)92;
unsigned char var_6 = (unsigned char)120;
unsigned char var_9 = (unsigned char)76;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)57;
int zero = 0;
unsigned char var_14 = (unsigned char)107;
int var_15 = -649419179;
unsigned int var_16 = 2638907579U;
short var_17 = (short)18418;
unsigned char var_18 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
