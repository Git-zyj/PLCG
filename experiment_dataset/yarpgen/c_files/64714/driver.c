#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1869910794;
_Bool var_1 = (_Bool)0;
unsigned int var_8 = 1028697595U;
unsigned long long int var_9 = 11423933068006869852ULL;
long long int var_13 = -9168650691819001104LL;
unsigned long long int var_15 = 2156332604509719251ULL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1821260378U;
int zero = 0;
int var_19 = 1680796626;
unsigned int var_20 = 431049970U;
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
