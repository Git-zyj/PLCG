#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)18110;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)70;
signed char var_12 = (signed char)13;
int var_15 = -1524813912;
int var_16 = 1351970184;
int zero = 0;
int var_17 = -1098100868;
unsigned int var_18 = 798826157U;
signed char var_19 = (signed char)-19;
unsigned short var_20 = (unsigned short)22801;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
