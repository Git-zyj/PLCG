#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 470324861;
short var_1 = (short)22837;
int var_2 = 1599082089;
int var_3 = 1041522815;
short var_4 = (short)-6948;
unsigned long long int var_6 = 1853208768926939222ULL;
long long int var_7 = 7384170892385530122LL;
int zero = 0;
unsigned int var_10 = 2960558010U;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
