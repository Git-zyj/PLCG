#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5636197416348263351LL;
unsigned int var_1 = 2790710614U;
unsigned long long int var_3 = 13904344874583763469ULL;
unsigned long long int var_4 = 4072067969688987667ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)64424;
unsigned char var_8 = (unsigned char)106;
long long int var_9 = 2339351561897609148LL;
int zero = 0;
unsigned long long int var_10 = 13669352141984687292ULL;
long long int var_11 = 2247042284098515575LL;
unsigned long long int var_12 = 12036677846694220494ULL;
unsigned long long int var_13 = 1253675176385030389ULL;
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
