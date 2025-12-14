#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8815944828019813944LL;
short var_4 = (short)3102;
unsigned short var_5 = (unsigned short)14144;
long long int var_7 = 4684252972178984053LL;
unsigned long long int var_9 = 9148084398874470196ULL;
unsigned short var_12 = (unsigned short)4309;
int var_17 = -1152110869;
unsigned long long int var_18 = 17794310224418525562ULL;
int zero = 0;
unsigned int var_20 = 3603655239U;
short var_21 = (short)-10208;
long long int var_22 = -2503850678109138363LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
