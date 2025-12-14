#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -829284249363630140LL;
unsigned long long int var_2 = 12451353299590497348ULL;
unsigned long long int var_6 = 13599802195176684552ULL;
unsigned long long int var_8 = 15690245037615037672ULL;
int zero = 0;
short var_11 = (short)-2321;
unsigned int var_12 = 3272041172U;
unsigned char var_13 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
