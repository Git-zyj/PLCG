#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1229392838445684376LL;
unsigned long long int var_1 = 17474340008000243557ULL;
short var_3 = (short)9982;
unsigned int var_4 = 1149543316U;
unsigned int var_5 = 1703586836U;
unsigned long long int var_6 = 4694539697779785523ULL;
unsigned long long int var_7 = 5252332034595160708ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)107;
int zero = 0;
unsigned long long int var_10 = 8561576940555883336ULL;
unsigned long long int var_11 = 1581068169364769722ULL;
unsigned long long int var_12 = 18245563661803142675ULL;
signed char var_13 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
