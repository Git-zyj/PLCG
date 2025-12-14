#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6408763246802867491LL;
short var_7 = (short)32212;
unsigned int var_8 = 86590639U;
signed char var_12 = (signed char)2;
unsigned short var_15 = (unsigned short)53410;
int zero = 0;
int var_19 = 915838983;
unsigned char var_20 = (unsigned char)40;
long long int var_21 = -4410991585700837311LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
