#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49827;
long long int var_2 = -7454103054557856153LL;
unsigned short var_3 = (unsigned short)56197;
signed char var_5 = (signed char)-67;
short var_9 = (short)12932;
int var_10 = -1667867359;
unsigned long long int var_11 = 17861869492253052235ULL;
signed char var_12 = (signed char)-93;
signed char var_14 = (signed char)-9;
long long int var_15 = 687140802406696110LL;
int zero = 0;
unsigned long long int var_16 = 571435523667253026ULL;
unsigned short var_17 = (unsigned short)60899;
void init() {
}

void checksum() {
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
