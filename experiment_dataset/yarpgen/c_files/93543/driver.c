#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
signed char var_1 = (signed char)8;
signed char var_2 = (signed char)28;
signed char var_4 = (signed char)-115;
signed char var_5 = (signed char)-53;
signed char var_7 = (signed char)-93;
signed char var_8 = (signed char)-63;
signed char var_14 = (signed char)-27;
int zero = 0;
signed char var_15 = (signed char)-120;
signed char var_16 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
