#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 140489981U;
short var_6 = (short)-10135;
short var_9 = (short)-24108;
unsigned long long int var_10 = 6824006813473083846ULL;
int var_11 = 1031231255;
unsigned long long int var_12 = 11426027079079948870ULL;
int zero = 0;
short var_16 = (short)-10921;
unsigned char var_17 = (unsigned char)217;
short var_18 = (short)-554;
unsigned long long int var_19 = 416622893781365095ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
