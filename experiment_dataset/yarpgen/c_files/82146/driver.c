#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1328924921;
unsigned long long int var_3 = 2331856806238166056ULL;
signed char var_8 = (signed char)31;
int zero = 0;
unsigned short var_13 = (unsigned short)33234;
signed char var_14 = (signed char)-2;
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
