#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44792;
unsigned char var_2 = (unsigned char)171;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-14780;
int var_8 = 518432524;
unsigned long long int var_10 = 18078856919510543501ULL;
int zero = 0;
unsigned long long int var_15 = 10475973086800219324ULL;
unsigned char var_16 = (unsigned char)221;
short var_17 = (short)-29368;
void init() {
}

void checksum() {
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
