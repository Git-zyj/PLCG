#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11316304455779414506ULL;
signed char var_4 = (signed char)-120;
short var_5 = (short)7733;
unsigned short var_6 = (unsigned short)6285;
unsigned short var_8 = (unsigned short)51029;
signed char var_9 = (signed char)-92;
unsigned long long int var_11 = 7520758456023108672ULL;
int zero = 0;
unsigned long long int var_12 = 1364688584562855425ULL;
unsigned int var_13 = 3466578223U;
signed char var_14 = (signed char)15;
int var_15 = 952356674;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
