#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1147969972;
unsigned char var_2 = (unsigned char)63;
unsigned char var_3 = (unsigned char)143;
short var_4 = (short)10615;
short var_6 = (short)-17880;
unsigned short var_9 = (unsigned short)45590;
short var_12 = (short)-1418;
unsigned int var_14 = 3501854983U;
int zero = 0;
int var_16 = -674028755;
int var_17 = -1570084862;
long long int var_18 = 1030213606781632090LL;
long long int var_19 = -4059559355399461124LL;
long long int var_20 = 4674050778060859264LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
