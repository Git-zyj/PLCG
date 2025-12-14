#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 971095224;
long long int var_3 = 2613519820273294740LL;
short var_6 = (short)-13459;
unsigned int var_9 = 1172114730U;
unsigned short var_10 = (unsigned short)43630;
short var_12 = (short)724;
int zero = 0;
long long int var_13 = 5697290837852609934LL;
unsigned char var_14 = (unsigned char)145;
unsigned long long int var_15 = 14500241220512192582ULL;
void init() {
}

void checksum() {
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
