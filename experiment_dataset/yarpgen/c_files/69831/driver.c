#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
unsigned short var_2 = (unsigned short)40331;
long long int var_5 = -1717963723169903651LL;
long long int var_9 = 644299829922994875LL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)25;
int zero = 0;
long long int var_15 = -6767696582323423602LL;
unsigned char var_16 = (unsigned char)96;
signed char var_17 = (signed char)108;
void init() {
}

void checksum() {
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
