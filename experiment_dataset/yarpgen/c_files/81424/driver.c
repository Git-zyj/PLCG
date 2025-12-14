#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7403860886666248322ULL;
unsigned long long int var_2 = 4322040239446237832ULL;
short var_3 = (short)17006;
signed char var_5 = (signed char)121;
unsigned int var_6 = 1483878994U;
short var_7 = (short)22849;
unsigned int var_12 = 2777300018U;
unsigned int var_13 = 1268026206U;
int zero = 0;
unsigned int var_14 = 1961013036U;
unsigned long long int var_15 = 8574965461645780786ULL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 5960938796833065127LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
