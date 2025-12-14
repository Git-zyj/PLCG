#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 830338322;
short var_10 = (short)25476;
unsigned char var_11 = (unsigned char)209;
int var_12 = -40933686;
unsigned short var_15 = (unsigned short)51285;
int zero = 0;
unsigned long long int var_19 = 6698124647783044994ULL;
long long int var_20 = -7606659933959416057LL;
void init() {
}

void checksum() {
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
