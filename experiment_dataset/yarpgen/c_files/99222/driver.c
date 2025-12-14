#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11421395061822684930ULL;
unsigned long long int var_1 = 3917281981132123163ULL;
unsigned long long int var_2 = 15255298623310324743ULL;
signed char var_3 = (signed char)20;
unsigned long long int var_5 = 5859211426177708489ULL;
unsigned short var_7 = (unsigned short)5917;
unsigned long long int var_8 = 4333368001871656878ULL;
signed char var_10 = (signed char)-86;
unsigned short var_11 = (unsigned short)55573;
int zero = 0;
signed char var_12 = (signed char)34;
unsigned long long int var_13 = 4985526539182829888ULL;
unsigned long long int var_14 = 5627554247872979146ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
