#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 202790005U;
unsigned int var_3 = 3135324244U;
unsigned char var_4 = (unsigned char)91;
unsigned int var_12 = 2935400223U;
unsigned long long int var_13 = 16458177831883769614ULL;
unsigned short var_16 = (unsigned short)29927;
int var_18 = -1542328732;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 773088107;
unsigned int var_22 = 3558542433U;
int var_23 = 74578117;
unsigned long long int var_24 = 17792133377515233723ULL;
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
