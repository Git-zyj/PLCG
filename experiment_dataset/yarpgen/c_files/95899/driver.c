#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1660;
long long int var_5 = -5393691256197419411LL;
signed char var_7 = (signed char)-98;
long long int var_12 = 2635833512340752856LL;
short var_16 = (short)5831;
int zero = 0;
unsigned long long int var_18 = 12837433331171706017ULL;
long long int var_19 = -2129921495639880821LL;
short var_20 = (short)-8447;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
