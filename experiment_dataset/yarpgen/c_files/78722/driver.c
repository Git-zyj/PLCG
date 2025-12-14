#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
_Bool var_1 = (_Bool)0;
int var_3 = 240322594;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-3882;
unsigned short var_16 = (unsigned short)13224;
signed char var_18 = (signed char)39;
int zero = 0;
int var_19 = -520369501;
signed char var_20 = (signed char)38;
short var_21 = (short)19461;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
