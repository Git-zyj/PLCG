#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
long long int var_2 = 3737864495651916618LL;
long long int var_4 = -1067105130483884700LL;
unsigned long long int var_5 = 4166569878207254613ULL;
unsigned int var_6 = 148327906U;
signed char var_7 = (signed char)-5;
signed char var_9 = (signed char)37;
int zero = 0;
unsigned int var_11 = 2160252431U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 7267434487887125482ULL;
unsigned long long int var_14 = 4959110288470513614ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
