#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)85;
unsigned short var_7 = (unsigned short)16163;
long long int var_8 = -7745846504046763691LL;
signed char var_10 = (signed char)44;
int var_13 = -494957095;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)970;
unsigned long long int var_20 = 3036077504738630649ULL;
unsigned short var_21 = (unsigned short)10542;
signed char var_22 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
