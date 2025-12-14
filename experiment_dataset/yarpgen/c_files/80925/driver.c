#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7202040275247485105LL;
signed char var_2 = (signed char)81;
unsigned int var_3 = 1484505885U;
long long int var_4 = -8931962024834141743LL;
unsigned int var_5 = 2777816265U;
int var_6 = -1795610473;
unsigned long long int var_9 = 9841539066221213186ULL;
int zero = 0;
signed char var_11 = (signed char)-21;
signed char var_12 = (signed char)34;
unsigned int var_13 = 2925378291U;
void init() {
}

void checksum() {
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
