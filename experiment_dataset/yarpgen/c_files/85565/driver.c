#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-62;
unsigned int var_6 = 1518774085U;
unsigned long long int var_8 = 5343500468937020861ULL;
int var_15 = -411979361;
int zero = 0;
int var_16 = 738462115;
unsigned long long int var_17 = 15797988155313605505ULL;
unsigned long long int var_18 = 9804477045246835872ULL;
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
