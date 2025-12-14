#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1172800338;
int var_2 = -167820998;
_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int zero = 0;
short var_13 = (short)-27888;
signed char var_14 = (signed char)-99;
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
