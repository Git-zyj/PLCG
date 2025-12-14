#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-40;
unsigned long long int var_5 = 3566175279012083786ULL;
signed char var_6 = (signed char)95;
short var_8 = (short)17507;
unsigned long long int var_9 = 6296401644894740686ULL;
short var_11 = (short)-17804;
unsigned long long int var_13 = 4496695093718188105ULL;
int zero = 0;
unsigned long long int var_15 = 2251278796823399382ULL;
short var_16 = (short)-32273;
unsigned long long int var_17 = 36070382402609852ULL;
signed char var_18 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
