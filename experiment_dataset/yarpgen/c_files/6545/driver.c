#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5361296209952380265LL;
unsigned short var_1 = (unsigned short)37294;
short var_2 = (short)-19065;
unsigned long long int var_3 = 11658753760642437129ULL;
short var_5 = (short)-19909;
signed char var_14 = (signed char)26;
long long int var_15 = -2615489708002298149LL;
long long int var_17 = 3033281231366614068LL;
int zero = 0;
short var_20 = (short)-8963;
unsigned char var_21 = (unsigned char)23;
short var_22 = (short)4083;
unsigned int var_23 = 2071704438U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
