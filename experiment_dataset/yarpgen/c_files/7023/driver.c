#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9128705609374910147LL;
unsigned int var_2 = 848361112U;
unsigned int var_3 = 2655785298U;
signed char var_4 = (signed char)85;
unsigned short var_5 = (unsigned short)13063;
unsigned char var_8 = (unsigned char)217;
signed char var_9 = (signed char)102;
int zero = 0;
unsigned int var_10 = 3686330140U;
long long int var_11 = 8039949809460944128LL;
unsigned short var_12 = (unsigned short)35738;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
