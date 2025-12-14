#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-106;
_Bool var_3 = (_Bool)1;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)-37;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-123;
signed char var_21 = (signed char)-77;
short var_22 = (short)-8691;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
