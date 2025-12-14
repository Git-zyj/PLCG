#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 346629511;
signed char var_5 = (signed char)-113;
short var_8 = (short)-1489;
long long int var_9 = 7565055155843641901LL;
long long int var_11 = -1043484161855622560LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
