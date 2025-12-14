#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -64970122156356115LL;
unsigned int var_2 = 274092002U;
unsigned int var_3 = 4213537543U;
unsigned long long int var_5 = 17440856543520277085ULL;
unsigned long long int var_9 = 13177855972636442327ULL;
unsigned int var_10 = 3127945759U;
long long int var_11 = -6496540462787409098LL;
long long int var_12 = -5538103863167538389LL;
unsigned int var_14 = 695940306U;
long long int var_15 = 6216413085849160097LL;
unsigned int var_16 = 3959678489U;
unsigned int var_17 = 4227552807U;
int zero = 0;
unsigned long long int var_18 = 8203419811710341028ULL;
unsigned long long int var_19 = 11016837865523513718ULL;
unsigned int var_20 = 766379495U;
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
