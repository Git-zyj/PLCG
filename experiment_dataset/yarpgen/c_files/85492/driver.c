#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
signed char var_1 = (signed char)-45;
signed char var_3 = (signed char)50;
signed char var_4 = (signed char)26;
int var_8 = 47276137;
int zero = 0;
int var_12 = 440739443;
unsigned long long int var_13 = 8693765165972726462ULL;
signed char var_14 = (signed char)-12;
unsigned long long int var_15 = 10463468231396058759ULL;
short var_16 = (short)-29646;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
