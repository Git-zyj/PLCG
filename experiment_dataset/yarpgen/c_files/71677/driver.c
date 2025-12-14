#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 967237773U;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)47;
short var_5 = (short)16172;
unsigned char var_9 = (unsigned char)186;
int zero = 0;
signed char var_12 = (signed char)-35;
long long int var_13 = 8834290048169845301LL;
unsigned int var_14 = 3180363213U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
