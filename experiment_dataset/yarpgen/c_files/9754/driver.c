#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8177;
signed char var_3 = (signed char)-69;
_Bool var_4 = (_Bool)1;
int var_7 = 1046062179;
long long int var_9 = 8926817481012091014LL;
long long int var_12 = -3654803580868743560LL;
int zero = 0;
unsigned short var_15 = (unsigned short)13862;
unsigned int var_16 = 2902375766U;
unsigned short var_17 = (unsigned short)51007;
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
