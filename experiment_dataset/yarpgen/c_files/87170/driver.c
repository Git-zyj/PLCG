#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15401970461783763488ULL;
signed char var_5 = (signed char)24;
unsigned long long int var_7 = 16511058527763992291ULL;
signed char var_9 = (signed char)-76;
unsigned int var_10 = 2466309029U;
unsigned long long int var_11 = 16758669788401306546ULL;
short var_14 = (short)2709;
unsigned int var_15 = 2048209862U;
short var_17 = (short)-23215;
int zero = 0;
signed char var_18 = (signed char)50;
long long int var_19 = -7784715565256035644LL;
signed char var_20 = (signed char)-114;
unsigned int var_21 = 4253179372U;
long long int var_22 = 215215446698027145LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
