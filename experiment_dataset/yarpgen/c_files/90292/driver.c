#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2611104491U;
long long int var_4 = 7662315188714144533LL;
int var_5 = -1252458164;
int var_11 = 953658848;
long long int var_12 = -801940895873403492LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2536962954995973462LL;
int var_15 = -78789038;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
