#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
int var_1 = -1207068065;
unsigned char var_5 = (unsigned char)82;
unsigned int var_6 = 62742256U;
unsigned short var_7 = (unsigned short)35096;
unsigned char var_8 = (unsigned char)135;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)15;
int var_11 = 1502456503;
unsigned char var_14 = (unsigned char)12;
unsigned char var_15 = (unsigned char)77;
unsigned char var_16 = (unsigned char)244;
int zero = 0;
long long int var_17 = -1192802457685734988LL;
unsigned char var_18 = (unsigned char)140;
signed char var_19 = (signed char)38;
unsigned short var_20 = (unsigned short)32620;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
