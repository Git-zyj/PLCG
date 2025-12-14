#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9983197703542127913ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 11548563817268860368ULL;
signed char var_7 = (signed char)54;
short var_8 = (short)25407;
signed char var_11 = (signed char)-51;
int zero = 0;
short var_13 = (short)732;
unsigned char var_14 = (unsigned char)28;
signed char var_15 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
