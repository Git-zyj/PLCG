#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 662495212U;
short var_1 = (short)23245;
int var_2 = -979170853;
long long int var_7 = -4991176476391706080LL;
_Bool var_9 = (_Bool)0;
int var_10 = -272335182;
int zero = 0;
int var_12 = 1936002950;
unsigned int var_13 = 783221620U;
long long int var_14 = -1402363718720313293LL;
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
