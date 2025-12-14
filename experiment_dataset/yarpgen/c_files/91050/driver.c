#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -424618091;
long long int var_5 = 5452635006959650906LL;
signed char var_9 = (signed char)6;
short var_11 = (short)7449;
long long int var_13 = 9051279212886944700LL;
_Bool var_16 = (_Bool)0;
unsigned char var_18 = (unsigned char)6;
int zero = 0;
int var_20 = 1370447581;
int var_21 = -950368560;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
