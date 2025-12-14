#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
signed char var_3 = (signed char)-52;
signed char var_6 = (signed char)23;
signed char var_7 = (signed char)-27;
signed char var_8 = (signed char)-78;
signed char var_10 = (signed char)-10;
int zero = 0;
signed char var_12 = (signed char)-49;
signed char var_13 = (signed char)-124;
void init() {
}

void checksum() {
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
