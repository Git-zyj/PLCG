#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28938;
unsigned int var_2 = 3478158335U;
signed char var_4 = (signed char)15;
signed char var_8 = (signed char)-98;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-94;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
