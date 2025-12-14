#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1577326684;
unsigned int var_2 = 1328069067U;
unsigned char var_7 = (unsigned char)95;
short var_9 = (short)-12117;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)-22943;
unsigned char var_12 = (unsigned char)66;
int var_13 = -1178450794;
unsigned int var_14 = 1810699411U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
