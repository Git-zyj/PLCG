#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -55248889332295729LL;
unsigned char var_2 = (unsigned char)153;
short var_5 = (short)-10958;
int zero = 0;
short var_14 = (short)-15397;
_Bool var_15 = (_Bool)0;
int var_16 = -1365535444;
unsigned short var_17 = (unsigned short)18304;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
