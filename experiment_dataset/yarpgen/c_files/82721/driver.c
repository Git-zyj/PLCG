#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
int var_1 = -651958156;
int var_3 = -642537911;
int var_4 = 704548413;
signed char var_5 = (signed char)-66;
unsigned short var_7 = (unsigned short)45920;
unsigned char var_8 = (unsigned char)163;
short var_9 = (short)-13201;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-19604;
int zero = 0;
short var_13 = (short)-30283;
long long int var_14 = 6285143279137995353LL;
void init() {
}

void checksum() {
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
