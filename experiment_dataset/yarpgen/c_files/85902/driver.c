#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-110;
unsigned long long int var_3 = 6986280531164967343ULL;
signed char var_9 = (signed char)11;
long long int var_10 = 7722164569598772377LL;
short var_13 = (short)25936;
int zero = 0;
int var_14 = -181503097;
signed char var_15 = (signed char)80;
long long int var_16 = -4038323820059625272LL;
short var_17 = (short)7302;
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
