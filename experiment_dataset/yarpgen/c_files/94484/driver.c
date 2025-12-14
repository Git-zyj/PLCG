#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4403727897152218774LL;
unsigned long long int var_3 = 10635039019547864541ULL;
int var_6 = -1897293669;
signed char var_7 = (signed char)-87;
long long int var_8 = 3915510389588544625LL;
unsigned char var_9 = (unsigned char)24;
int zero = 0;
signed char var_10 = (signed char)-116;
unsigned long long int var_11 = 10560202927563320624ULL;
unsigned int var_12 = 4244462591U;
signed char var_13 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
