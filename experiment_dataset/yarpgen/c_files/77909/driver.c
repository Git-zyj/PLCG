#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1148730770;
unsigned short var_2 = (unsigned short)35072;
int var_5 = -1436377886;
unsigned short var_6 = (unsigned short)26559;
unsigned short var_14 = (unsigned short)47138;
unsigned short var_15 = (unsigned short)43264;
long long int var_16 = 7883194718509790151LL;
int var_18 = 984628144;
int zero = 0;
unsigned long long int var_19 = 1222463660230572135ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)249;
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
