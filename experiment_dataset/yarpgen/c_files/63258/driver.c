#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)200;
unsigned long long int var_5 = 6010355778506869283ULL;
int var_9 = -843863153;
unsigned int var_10 = 2413268835U;
signed char var_12 = (signed char)-111;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 5290776023581929841ULL;
unsigned int var_15 = 2551567916U;
signed char var_16 = (signed char)6;
signed char var_17 = (signed char)9;
unsigned int var_18 = 485932455U;
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
