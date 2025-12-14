#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
unsigned short var_4 = (unsigned short)26536;
int var_6 = -208528739;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-5778;
int zero = 0;
unsigned char var_18 = (unsigned char)126;
signed char var_19 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
