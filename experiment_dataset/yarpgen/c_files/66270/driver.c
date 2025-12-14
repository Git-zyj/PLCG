#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7045118489362599892ULL;
unsigned int var_7 = 1750338548U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 10627355567801753078ULL;
unsigned char var_18 = (unsigned char)164;
short var_19 = (short)-10853;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
