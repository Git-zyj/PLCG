#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61939;
signed char var_1 = (signed char)-54;
_Bool var_2 = (_Bool)1;
int var_3 = -474882213;
int var_6 = -713415337;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-29;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-42;
unsigned long long int var_12 = 10383117676545100157ULL;
signed char var_13 = (signed char)125;
int zero = 0;
unsigned long long int var_15 = 2806665425221802375ULL;
signed char var_16 = (signed char)-97;
int var_17 = 1562623999;
void init() {
}

void checksum() {
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
