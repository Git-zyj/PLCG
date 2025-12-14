#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 8126950969438068127ULL;
unsigned long long int var_6 = 7792402834861764909ULL;
unsigned long long int var_7 = 7751956773383577337ULL;
signed char var_9 = (signed char)124;
int zero = 0;
signed char var_11 = (signed char)13;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)54259;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
