#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5837785261886799555ULL;
unsigned short var_4 = (unsigned short)52728;
unsigned long long int var_5 = 12084773393999666846ULL;
unsigned long long int var_6 = 4795210139323226593ULL;
unsigned long long int var_7 = 14706710093740475741ULL;
unsigned long long int var_8 = 6195169282885818156ULL;
unsigned short var_9 = (unsigned short)25735;
unsigned long long int var_10 = 8379027467683976935ULL;
unsigned long long int var_11 = 5487094612925911932ULL;
unsigned short var_12 = (unsigned short)18009;
unsigned short var_14 = (unsigned short)13449;
int zero = 0;
unsigned short var_16 = (unsigned short)39691;
unsigned long long int var_17 = 9164559291492473615ULL;
unsigned long long int var_18 = 15620907567062628019ULL;
unsigned long long int var_19 = 6474429185244387630ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
