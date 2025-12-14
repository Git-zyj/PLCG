#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-2;
signed char var_5 = (signed char)70;
signed char var_6 = (signed char)-98;
signed char var_8 = (signed char)-15;
signed char var_13 = (signed char)-102;
int zero = 0;
signed char var_16 = (signed char)-71;
signed char var_17 = (signed char)26;
signed char var_18 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
