#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13343490352356110441ULL;
unsigned long long int var_6 = 17641417208698878285ULL;
long long int var_8 = 6744152430880203687LL;
unsigned short var_9 = (unsigned short)64709;
unsigned long long int var_11 = 9979264271564871550ULL;
unsigned short var_12 = (unsigned short)7127;
int zero = 0;
unsigned long long int var_17 = 11580020733370948527ULL;
unsigned short var_18 = (unsigned short)8596;
long long int var_19 = 4495724528781816185LL;
void init() {
}

void checksum() {
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
