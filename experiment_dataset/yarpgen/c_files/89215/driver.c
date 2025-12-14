#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 996669535;
long long int var_1 = -813510584099082217LL;
unsigned char var_7 = (unsigned char)195;
unsigned short var_8 = (unsigned short)12807;
long long int var_9 = 6065768431853322928LL;
int zero = 0;
short var_12 = (short)-15543;
short var_13 = (short)4332;
int var_14 = -1264223335;
void init() {
}

void checksum() {
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
