#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-92;
signed char var_3 = (signed char)-51;
signed char var_7 = (signed char)-118;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 12932771978519326427ULL;
signed char var_14 = (signed char)-118;
int zero = 0;
unsigned long long int var_15 = 9155286342184965469ULL;
signed char var_16 = (signed char)-3;
unsigned short var_17 = (unsigned short)38119;
void init() {
}

void checksum() {
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
