#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
unsigned int var_1 = 743435158U;
unsigned long long int var_2 = 15006274472817656968ULL;
long long int var_6 = -1350154619585279418LL;
short var_10 = (short)1138;
int zero = 0;
long long int var_16 = 4252835145299593324LL;
unsigned long long int var_17 = 16764010787130313476ULL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 6468220976202696725LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
