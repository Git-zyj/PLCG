#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = 9034987323070118652LL;
int var_5 = 1395604581;
_Bool var_6 = (_Bool)1;
long long int var_9 = 5333589696414136207LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = 2418974188532903727LL;
long long int var_13 = 8716462729506764113LL;
short var_16 = (short)-27400;
int zero = 0;
int var_17 = 107308709;
unsigned char var_18 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
