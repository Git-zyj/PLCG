#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-826;
short var_3 = (short)5543;
long long int var_7 = 1346252664417985125LL;
signed char var_9 = (signed char)36;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)107;
long long int var_12 = -8494101452302926049LL;
int zero = 0;
signed char var_14 = (signed char)108;
signed char var_15 = (signed char)-65;
signed char var_16 = (signed char)16;
short var_17 = (short)26813;
unsigned long long int var_18 = 4069171158268822021ULL;
unsigned long long int var_19 = 15492210849114238548ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
