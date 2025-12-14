#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2084646924;
unsigned long long int var_2 = 11826806621733809674ULL;
unsigned char var_4 = (unsigned char)73;
unsigned short var_5 = (unsigned short)5424;
long long int var_10 = -1908732331100814687LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)35;
long long int var_16 = -2602929223907763761LL;
int zero = 0;
unsigned long long int var_19 = 11188054824130360992ULL;
unsigned short var_20 = (unsigned short)39364;
signed char var_21 = (signed char)109;
long long int var_22 = 412337827885036638LL;
long long int var_23 = -2166020696998299446LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
