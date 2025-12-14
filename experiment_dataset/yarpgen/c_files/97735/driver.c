#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -974180072;
int var_3 = 1225848186;
unsigned char var_6 = (unsigned char)106;
unsigned short var_8 = (unsigned short)54481;
int var_10 = 716787655;
signed char var_12 = (signed char)89;
signed char var_13 = (signed char)93;
int zero = 0;
unsigned long long int var_15 = 17085101881639549617ULL;
signed char var_16 = (signed char)72;
_Bool var_17 = (_Bool)0;
int var_18 = -1244728067;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
