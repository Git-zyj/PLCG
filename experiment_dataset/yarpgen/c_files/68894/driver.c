#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9578504027949201104ULL;
signed char var_5 = (signed char)11;
unsigned short var_6 = (unsigned short)36489;
unsigned int var_9 = 1960192606U;
_Bool var_10 = (_Bool)1;
unsigned int var_14 = 4071103274U;
int zero = 0;
int var_17 = -1052919229;
long long int var_18 = -1540669146764747781LL;
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
