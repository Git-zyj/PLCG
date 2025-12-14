#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10870213422942226645ULL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)29376;
unsigned int var_7 = 3747996098U;
signed char var_9 = (signed char)112;
long long int var_10 = -5837764319867671089LL;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 490509765U;
unsigned int var_15 = 2178620631U;
int zero = 0;
int var_18 = -1379218918;
unsigned long long int var_19 = 5476720580110832573ULL;
short var_20 = (short)11522;
unsigned char var_21 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
