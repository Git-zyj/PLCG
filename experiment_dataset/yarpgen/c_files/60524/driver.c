#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15359845124962586946ULL;
unsigned int var_1 = 2639627520U;
signed char var_4 = (signed char)90;
signed char var_8 = (signed char)26;
long long int var_9 = 854196759643331533LL;
int zero = 0;
short var_16 = (short)11794;
unsigned short var_17 = (unsigned short)64816;
_Bool var_18 = (_Bool)1;
short var_19 = (short)371;
void init() {
}

void checksum() {
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
