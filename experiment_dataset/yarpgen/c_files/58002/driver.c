#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1877581108;
int var_1 = 1854189907;
int var_2 = -1957048175;
signed char var_4 = (signed char)-30;
unsigned short var_6 = (unsigned short)46539;
long long int var_7 = 918813846673908529LL;
signed char var_8 = (signed char)68;
_Bool var_9 = (_Bool)1;
int var_10 = -166339412;
int var_13 = -178008438;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)73;
_Bool var_19 = (_Bool)1;
long long int var_20 = -5551503964889184762LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
