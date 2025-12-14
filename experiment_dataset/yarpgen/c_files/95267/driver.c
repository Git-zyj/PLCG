#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 614253646389909213ULL;
signed char var_4 = (signed char)98;
unsigned long long int var_6 = 11160263460318039644ULL;
int var_7 = 1473150243;
signed char var_10 = (signed char)-37;
int zero = 0;
unsigned long long int var_16 = 9739423374095133447ULL;
signed char var_17 = (signed char)61;
short var_18 = (short)30296;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
