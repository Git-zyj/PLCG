#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22096;
unsigned short var_9 = (unsigned short)15910;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1530623803U;
unsigned long long int var_20 = 1380466210382394804ULL;
short var_21 = (short)23637;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
