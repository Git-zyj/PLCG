#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13314218176566132207ULL;
unsigned long long int var_1 = 7196081416984507105ULL;
unsigned long long int var_2 = 1600218401471827377ULL;
unsigned long long int var_3 = 11745498946964918506ULL;
unsigned long long int var_4 = 673242885544715763ULL;
unsigned long long int var_5 = 7966435637533078020ULL;
unsigned long long int var_6 = 9455476928125288121ULL;
unsigned long long int var_8 = 10862438333810208139ULL;
unsigned long long int var_9 = 1582209927849707800ULL;
unsigned long long int var_10 = 8933478561755540903ULL;
int zero = 0;
unsigned long long int var_11 = 17188406740626678358ULL;
unsigned long long int var_12 = 3758203367867913071ULL;
unsigned long long int var_13 = 7705475208803154264ULL;
unsigned long long int var_14 = 9909562872375875310ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
