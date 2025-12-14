#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34709;
short var_2 = (short)12719;
unsigned int var_6 = 1594742047U;
unsigned int var_7 = 1951922451U;
signed char var_9 = (signed char)65;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = -1459931540;
short var_13 = (short)-19134;
long long int var_14 = -207492642420929294LL;
unsigned char var_15 = (unsigned char)222;
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
