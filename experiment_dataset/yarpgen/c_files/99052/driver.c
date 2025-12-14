#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25009;
short var_1 = (short)25003;
unsigned long long int var_3 = 392564073418918609ULL;
unsigned long long int var_6 = 6996869084588786793ULL;
short var_8 = (short)24329;
int zero = 0;
short var_10 = (short)-9229;
unsigned char var_11 = (unsigned char)108;
unsigned int var_12 = 3013183786U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
