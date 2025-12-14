#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-86;
unsigned int var_3 = 486844910U;
long long int var_4 = 7063022166402553820LL;
unsigned short var_5 = (unsigned short)7556;
unsigned short var_6 = (unsigned short)41453;
unsigned int var_7 = 883863344U;
unsigned long long int var_9 = 10691369662080099112ULL;
unsigned long long int var_10 = 1905619348000602131ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)13920;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 3118447368396840026ULL;
int var_15 = 1828385333;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
