#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)47;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)250;
unsigned short var_13 = (unsigned short)9338;
unsigned long long int var_14 = 16701520131889835479ULL;
short var_15 = (short)27579;
int zero = 0;
long long int var_16 = -2080206186874083469LL;
long long int var_17 = -7589841418690258634LL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -1327848405579172645LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
