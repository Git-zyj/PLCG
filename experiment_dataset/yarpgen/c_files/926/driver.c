#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1038049199U;
unsigned char var_2 = (unsigned char)73;
unsigned int var_3 = 2537316856U;
unsigned int var_4 = 4286634008U;
int var_7 = -1511059224;
short var_8 = (short)-3797;
long long int var_9 = -3044542524247844188LL;
unsigned int var_12 = 1004796U;
int zero = 0;
unsigned int var_13 = 657286715U;
unsigned int var_14 = 3876768132U;
unsigned char var_15 = (unsigned char)220;
unsigned char var_16 = (unsigned char)253;
void init() {
}

void checksum() {
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
