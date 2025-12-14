#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2192680105205261768ULL;
unsigned long long int var_1 = 9164622047296637692ULL;
unsigned long long int var_2 = 12798468263151470666ULL;
unsigned long long int var_3 = 16646887996870220551ULL;
unsigned long long int var_5 = 9239011413453299489ULL;
unsigned long long int var_6 = 4462356460178241546ULL;
unsigned long long int var_7 = 18391749800267001127ULL;
unsigned long long int var_8 = 11523329915231463282ULL;
unsigned long long int var_10 = 16764458163709132350ULL;
int zero = 0;
unsigned long long int var_11 = 9799845665530163158ULL;
unsigned long long int var_12 = 7774132598443082022ULL;
unsigned long long int var_13 = 6823857893216226255ULL;
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
