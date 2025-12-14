#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19729;
signed char var_5 = (signed char)-39;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)25582;
unsigned char var_17 = (unsigned char)188;
signed char var_18 = (signed char)39;
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
