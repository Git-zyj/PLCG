#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31568;
long long int var_1 = -5048422822249286769LL;
unsigned int var_2 = 542319468U;
int var_4 = 972656418;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1613396030U;
unsigned long long int var_7 = 2442286114344912044ULL;
unsigned short var_8 = (unsigned short)51954;
unsigned int var_10 = 2402423482U;
unsigned int var_11 = 4002420685U;
int zero = 0;
unsigned short var_12 = (unsigned short)45043;
unsigned long long int var_13 = 687581678527503279ULL;
int var_14 = -1167960304;
int var_15 = 2056389045;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
