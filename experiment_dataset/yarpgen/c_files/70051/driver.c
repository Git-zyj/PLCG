#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -53940201;
unsigned int var_1 = 2568064131U;
int var_2 = 865462996;
long long int var_4 = -2585681206455899305LL;
int var_6 = -2071668032;
signed char var_7 = (signed char)121;
long long int var_8 = -4225201620866103811LL;
unsigned char var_9 = (unsigned char)175;
short var_10 = (short)-10195;
int zero = 0;
short var_11 = (short)-9055;
short var_12 = (short)-30380;
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
