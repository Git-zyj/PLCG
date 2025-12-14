#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10512447667118564284ULL;
unsigned long long int var_4 = 1564313835744481177ULL;
short var_8 = (short)-161;
signed char var_10 = (signed char)-10;
int zero = 0;
long long int var_11 = 7293048222280703791LL;
int var_12 = 267089752;
short var_13 = (short)-21148;
long long int var_14 = -5449886101140560795LL;
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
