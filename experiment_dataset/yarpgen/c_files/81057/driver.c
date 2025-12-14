#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
unsigned int var_1 = 1981409635U;
unsigned int var_4 = 3737119165U;
unsigned long long int var_7 = 5844772190087771810ULL;
_Bool var_9 = (_Bool)1;
long long int var_11 = 6615361326117223042LL;
unsigned long long int var_13 = 8417653897819093920ULL;
signed char var_15 = (signed char)-91;
int zero = 0;
short var_16 = (short)-19399;
short var_17 = (short)-14760;
signed char var_18 = (signed char)-94;
long long int var_19 = -5042682905610203044LL;
unsigned long long int var_20 = 5762960437468751581ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
