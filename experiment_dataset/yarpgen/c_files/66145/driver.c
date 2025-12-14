#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1616355432;
int var_7 = 443379108;
short var_9 = (short)-10733;
_Bool var_10 = (_Bool)1;
unsigned int var_14 = 2975274898U;
unsigned short var_16 = (unsigned short)27045;
short var_17 = (short)-10712;
int zero = 0;
long long int var_18 = -164086954882397983LL;
short var_19 = (short)27699;
int var_20 = -1373126377;
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
