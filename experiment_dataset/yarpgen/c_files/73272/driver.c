#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3916775650151748526ULL;
_Bool var_3 = (_Bool)0;
int var_4 = -1327261132;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)45838;
unsigned short var_7 = (unsigned short)22644;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_13 = (short)-24501;
long long int var_14 = 8077571301335423382LL;
long long int var_15 = 6723189132791064905LL;
long long int var_16 = 5682323867611106112LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
