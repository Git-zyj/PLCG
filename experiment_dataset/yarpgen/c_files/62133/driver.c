#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16318424638865231279ULL;
unsigned short var_2 = (unsigned short)61008;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)201;
unsigned short var_7 = (unsigned short)28031;
unsigned long long int var_8 = 8879838876686994585ULL;
unsigned int var_12 = 394765887U;
int zero = 0;
unsigned long long int var_13 = 7497219424268354105ULL;
unsigned short var_14 = (unsigned short)39365;
signed char var_15 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
