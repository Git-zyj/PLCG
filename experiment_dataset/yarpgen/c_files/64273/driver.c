#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13568;
unsigned long long int var_3 = 3558075174462310467ULL;
unsigned short var_4 = (unsigned short)14683;
long long int var_9 = 3874494611243394036LL;
short var_14 = (short)-22374;
int zero = 0;
long long int var_15 = 8693339244185905407LL;
short var_16 = (short)-6803;
unsigned long long int var_17 = 9899581151422499758ULL;
unsigned long long int var_18 = 1726582229892735701ULL;
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
