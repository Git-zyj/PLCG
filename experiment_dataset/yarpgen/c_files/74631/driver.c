#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
_Bool var_2 = (_Bool)1;
signed char var_8 = (signed char)-98;
unsigned char var_9 = (unsigned char)108;
short var_14 = (short)11160;
int zero = 0;
unsigned char var_20 = (unsigned char)198;
long long int var_21 = 7276956864703599992LL;
short var_22 = (short)14374;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
