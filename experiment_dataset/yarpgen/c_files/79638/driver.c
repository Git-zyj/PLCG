#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
unsigned long long int var_1 = 4090967153421040190ULL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -8404568926453210321LL;
unsigned long long int var_5 = 13388168310554491717ULL;
signed char var_9 = (signed char)15;
signed char var_10 = (signed char)-115;
int zero = 0;
signed char var_11 = (signed char)100;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
