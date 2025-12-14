#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-117;
signed char var_6 = (signed char)37;
signed char var_8 = (signed char)52;
signed char var_11 = (signed char)102;
int zero = 0;
unsigned char var_14 = (unsigned char)245;
short var_15 = (short)-9556;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
