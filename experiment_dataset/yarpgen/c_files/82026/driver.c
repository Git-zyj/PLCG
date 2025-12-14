#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2502945796954755887LL;
signed char var_1 = (signed char)-103;
signed char var_2 = (signed char)28;
unsigned short var_3 = (unsigned short)25455;
unsigned long long int var_8 = 2298920841182906721ULL;
signed char var_11 = (signed char)-118;
signed char var_12 = (signed char)-115;
_Bool var_13 = (_Bool)0;
signed char var_16 = (signed char)39;
int zero = 0;
short var_17 = (short)-7039;
unsigned long long int var_18 = 2560322893704831645ULL;
void init() {
}

void checksum() {
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
