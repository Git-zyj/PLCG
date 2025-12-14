#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16716120230446057792ULL;
unsigned long long int var_1 = 8105117351254079847ULL;
unsigned long long int var_6 = 10726000322192587417ULL;
unsigned short var_10 = (unsigned short)1771;
unsigned long long int var_16 = 17101720318065845404ULL;
unsigned long long int var_17 = 11341564483056307158ULL;
unsigned long long int var_19 = 16449778482434911170ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)17351;
unsigned short var_21 = (unsigned short)42168;
unsigned long long int var_22 = 4451453031183732076ULL;
unsigned short var_23 = (unsigned short)45636;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
