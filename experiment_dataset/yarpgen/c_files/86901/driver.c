#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1720828701;
int var_8 = 1214445291;
long long int var_11 = -900355681325085689LL;
unsigned long long int var_13 = 15988075866810267873ULL;
long long int var_15 = -3883430301749920470LL;
long long int var_16 = 3621881475901220090LL;
int zero = 0;
unsigned long long int var_19 = 3380831207636447451ULL;
int var_20 = 1140502675;
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
