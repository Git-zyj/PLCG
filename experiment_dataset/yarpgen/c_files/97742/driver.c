#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4679;
signed char var_2 = (signed char)86;
unsigned long long int var_7 = 8322653835686080291ULL;
int zero = 0;
signed char var_12 = (signed char)-1;
long long int var_13 = -5540954433357745476LL;
unsigned long long int var_14 = 2573581113546709856ULL;
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
