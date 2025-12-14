#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5097648496266771893LL;
signed char var_1 = (signed char)-46;
signed char var_4 = (signed char)-22;
unsigned short var_7 = (unsigned short)8146;
unsigned int var_9 = 1034394910U;
short var_11 = (short)-15500;
unsigned long long int var_16 = 6070399240659549586ULL;
int zero = 0;
long long int var_17 = -3092889189697396202LL;
long long int var_18 = 675978757379223968LL;
unsigned long long int var_19 = 2625022080099952975ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
