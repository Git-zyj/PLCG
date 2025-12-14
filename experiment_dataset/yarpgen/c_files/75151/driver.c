#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
short var_1 = (short)-29567;
unsigned int var_6 = 4278036500U;
unsigned char var_8 = (unsigned char)126;
int zero = 0;
short var_17 = (short)-7177;
signed char var_18 = (signed char)-44;
void init() {
}

void checksum() {
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
