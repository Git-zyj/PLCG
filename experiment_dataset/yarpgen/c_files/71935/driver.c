#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7723258924051348868LL;
short var_4 = (short)18539;
unsigned long long int var_6 = 7252281046559231313ULL;
unsigned long long int var_9 = 11268750091689779190ULL;
long long int var_10 = -2064628665818328006LL;
unsigned int var_13 = 905035219U;
short var_15 = (short)8150;
unsigned long long int var_16 = 14721574009238925619ULL;
int zero = 0;
long long int var_17 = 7017153744830192735LL;
unsigned long long int var_18 = 651438339222334712ULL;
void init() {
}

void checksum() {
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
