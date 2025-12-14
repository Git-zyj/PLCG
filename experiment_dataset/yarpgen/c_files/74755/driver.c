#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)103;
unsigned long long int var_2 = 17233011384840484447ULL;
unsigned long long int var_6 = 6023087814421551930ULL;
unsigned long long int var_8 = 9051022589801291900ULL;
unsigned short var_10 = (unsigned short)3870;
int zero = 0;
long long int var_15 = -2738866205527324344LL;
long long int var_16 = -1359245222711229996LL;
unsigned long long int var_17 = 14241524254608813528ULL;
int var_18 = -1555582488;
unsigned short var_19 = (unsigned short)49032;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
