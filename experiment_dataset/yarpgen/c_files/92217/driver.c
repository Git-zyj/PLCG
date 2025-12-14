#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2010993021539877732LL;
signed char var_4 = (signed char)17;
unsigned short var_7 = (unsigned short)25188;
unsigned long long int var_10 = 5111399214153097461ULL;
long long int var_12 = -4419556183216387994LL;
unsigned short var_15 = (unsigned short)52096;
int zero = 0;
unsigned short var_16 = (unsigned short)23337;
unsigned long long int var_17 = 888112970363424984ULL;
long long int var_18 = 762363166166924119LL;
void init() {
}

void checksum() {
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
