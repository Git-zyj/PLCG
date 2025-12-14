#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-30231;
short var_7 = (short)-3546;
int zero = 0;
short var_19 = (short)-29797;
unsigned short var_20 = (unsigned short)36371;
unsigned long long int var_21 = 3046221813479501201ULL;
unsigned char var_22 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
