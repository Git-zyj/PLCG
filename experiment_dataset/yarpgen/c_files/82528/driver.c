#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-79;
unsigned int var_9 = 3020766993U;
signed char var_10 = (signed char)-109;
int zero = 0;
unsigned char var_12 = (unsigned char)62;
unsigned short var_13 = (unsigned short)8101;
unsigned short var_14 = (unsigned short)56958;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
