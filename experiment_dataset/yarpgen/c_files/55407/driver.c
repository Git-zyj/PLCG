#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 898358214787366888LL;
unsigned int var_4 = 1338736090U;
_Bool var_5 = (_Bool)0;
long long int var_11 = 4231880027426128112LL;
int zero = 0;
unsigned short var_13 = (unsigned short)59763;
int var_14 = 897911187;
unsigned int var_15 = 2267332380U;
int var_16 = 1815794779;
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
