#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
short var_3 = (short)19955;
unsigned long long int var_6 = 11385909116617695758ULL;
unsigned int var_8 = 784069931U;
unsigned short var_10 = (unsigned short)53013;
unsigned int var_14 = 1620106782U;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_17 = -1918211785;
_Bool var_18 = (_Bool)0;
int var_19 = 1059869332;
void init() {
}

void checksum() {
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
