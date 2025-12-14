#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16919794900167155059ULL;
signed char var_2 = (signed char)-22;
unsigned short var_5 = (unsigned short)44368;
unsigned short var_7 = (unsigned short)42760;
unsigned long long int var_8 = 4450195271785059544ULL;
unsigned char var_10 = (unsigned char)222;
unsigned long long int var_11 = 2478582267904308779ULL;
long long int var_12 = 4631041989256627596LL;
int zero = 0;
unsigned long long int var_14 = 2185131764075522849ULL;
unsigned long long int var_15 = 9454336826084504405ULL;
_Bool var_16 = (_Bool)0;
int var_17 = -1932664840;
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
