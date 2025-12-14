#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 3025130192076465148LL;
int var_10 = -745379008;
long long int var_15 = -6004721388735098704LL;
short var_18 = (short)-30514;
int zero = 0;
int var_19 = 1384022177;
unsigned int var_20 = 1104362400U;
int var_21 = -1039966529;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
