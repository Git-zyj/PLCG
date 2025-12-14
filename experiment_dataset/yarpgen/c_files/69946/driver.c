#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 589910528U;
unsigned char var_1 = (unsigned char)213;
unsigned long long int var_3 = 8296503317617568217ULL;
int var_4 = -944818415;
long long int var_5 = 3367609967202309713LL;
unsigned long long int var_6 = 17892443552536553322ULL;
int var_8 = 333438061;
int zero = 0;
unsigned int var_11 = 2660247308U;
long long int var_12 = 7761537177872985715LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
