#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 2000205296678236224ULL;
unsigned int var_8 = 3885671780U;
unsigned short var_19 = (unsigned short)41000;
int zero = 0;
unsigned long long int var_20 = 15310919036163003632ULL;
signed char var_21 = (signed char)-5;
unsigned short var_22 = (unsigned short)59084;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
