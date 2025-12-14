#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 6522278U;
unsigned char var_1 = (unsigned char)110;
short var_4 = (short)3375;
short var_6 = (short)12313;
unsigned long long int var_10 = 862003134534023808ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2946172151U;
unsigned long long int var_15 = 886390065935041074ULL;
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
