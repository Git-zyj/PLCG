#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25799;
unsigned long long int var_5 = 11710227820587813374ULL;
unsigned char var_8 = (unsigned char)249;
int zero = 0;
unsigned long long int var_13 = 10888249412152151763ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-32675;
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
