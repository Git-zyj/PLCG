#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4501672038429013383LL;
signed char var_1 = (signed char)-96;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)88;
unsigned char var_9 = (unsigned char)159;
long long int var_11 = 8649059057994842255LL;
unsigned short var_12 = (unsigned short)56979;
int zero = 0;
int var_13 = -1241375279;
long long int var_14 = 9180902967653499766LL;
unsigned short var_15 = (unsigned short)16819;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
