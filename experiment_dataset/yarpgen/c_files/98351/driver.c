#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1396791107;
int var_1 = 1415821249;
unsigned char var_2 = (unsigned char)223;
unsigned char var_3 = (unsigned char)158;
int var_5 = 32262406;
long long int var_6 = -9155367180275929525LL;
unsigned long long int var_7 = 3195806080517361440ULL;
long long int var_9 = 5589516178839635754LL;
unsigned long long int var_10 = 14726831404737888243ULL;
long long int var_11 = 2420890801091146448LL;
int var_12 = -955451699;
int zero = 0;
unsigned int var_13 = 286843066U;
unsigned char var_14 = (unsigned char)213;
unsigned long long int var_15 = 4954856258640706056ULL;
int var_16 = -1415672788;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
