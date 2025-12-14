#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)101;
short var_2 = (short)-25453;
long long int var_4 = 6800145382908272321LL;
unsigned short var_5 = (unsigned short)38280;
unsigned short var_6 = (unsigned short)37759;
unsigned short var_10 = (unsigned short)38051;
int zero = 0;
long long int var_11 = -406074069314603611LL;
long long int var_12 = 732634619643998868LL;
short var_13 = (short)-14402;
unsigned short var_14 = (unsigned short)16794;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
