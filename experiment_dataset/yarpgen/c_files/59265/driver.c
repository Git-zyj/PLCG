#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5613257714880060229ULL;
signed char var_2 = (signed char)40;
long long int var_3 = -7152887176283940861LL;
unsigned char var_6 = (unsigned char)118;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 2964441750U;
short var_16 = (short)3784;
int zero = 0;
unsigned int var_20 = 3151462703U;
int var_21 = 893511953;
void init() {
}

void checksum() {
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
