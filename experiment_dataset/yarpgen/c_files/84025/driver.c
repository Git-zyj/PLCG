#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)190;
long long int var_4 = 2025777574664984056LL;
long long int var_6 = -6065733936378521668LL;
long long int var_7 = -2493109365031690675LL;
unsigned long long int var_9 = 17918852610597225280ULL;
unsigned long long int var_13 = 7411047537449699419ULL;
short var_14 = (short)24479;
int zero = 0;
long long int var_19 = -4619447115921817244LL;
unsigned long long int var_20 = 568200923840572468ULL;
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
