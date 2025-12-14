#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6318314358417264623ULL;
unsigned long long int var_13 = 4300208093730141656ULL;
unsigned long long int var_16 = 13516217487628445578ULL;
unsigned long long int var_18 = 7450055070096628605ULL;
int zero = 0;
unsigned long long int var_19 = 12863440239686460323ULL;
long long int var_20 = -4866277062757481455LL;
unsigned char var_21 = (unsigned char)191;
int var_22 = -2019500894;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
