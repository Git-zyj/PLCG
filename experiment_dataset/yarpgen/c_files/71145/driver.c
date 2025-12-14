#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7249113485379091037LL;
short var_2 = (short)-19575;
unsigned long long int var_3 = 12184830444703506114ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = -6893161722771704017LL;
int var_8 = 1616879880;
unsigned int var_9 = 3956154929U;
unsigned int var_10 = 3266819805U;
short var_11 = (short)-19322;
unsigned int var_12 = 55647088U;
short var_14 = (short)2114;
int zero = 0;
int var_15 = 1871614911;
int var_16 = -1928988262;
unsigned int var_17 = 178695029U;
unsigned int var_18 = 3545070136U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
