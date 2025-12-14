#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)43;
signed char var_4 = (signed char)42;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 5872569867222342125ULL;
int zero = 0;
signed char var_13 = (signed char)-45;
unsigned short var_14 = (unsigned short)5236;
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
