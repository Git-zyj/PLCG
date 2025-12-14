#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7722;
long long int var_7 = 8153890500295506450LL;
_Bool var_9 = (_Bool)1;
long long int var_11 = 5736701478815520213LL;
int zero = 0;
short var_12 = (short)1266;
unsigned char var_13 = (unsigned char)28;
long long int var_14 = 2812193931745708942LL;
int var_15 = 1968461285;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
