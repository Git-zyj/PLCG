#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)42;
signed char var_2 = (signed char)-6;
short var_6 = (short)-7280;
unsigned long long int var_7 = 7853396965231035394ULL;
unsigned int var_9 = 2920220727U;
unsigned short var_14 = (unsigned short)15841;
int zero = 0;
int var_18 = -404471580;
short var_19 = (short)-18363;
signed char var_20 = (signed char)-51;
void init() {
}

void checksum() {
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
