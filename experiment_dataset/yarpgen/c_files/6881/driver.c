#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7101336322374306753LL;
unsigned int var_3 = 567228836U;
long long int var_4 = -4564123613748083843LL;
int var_5 = 385341757;
unsigned long long int var_7 = 4982522865171351785ULL;
long long int var_11 = -5542359267910699725LL;
int var_12 = -1487631941;
int zero = 0;
short var_14 = (short)17898;
short var_15 = (short)8775;
unsigned long long int var_16 = 9548604140697409790ULL;
long long int var_17 = 7021930640818179911LL;
int var_18 = -1146679515;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
