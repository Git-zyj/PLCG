#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-9;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-25291;
short var_11 = (short)-6154;
short var_13 = (short)26821;
unsigned int var_15 = 2909854972U;
int zero = 0;
unsigned short var_17 = (unsigned short)32085;
unsigned long long int var_18 = 17908164105481014828ULL;
void init() {
}

void checksum() {
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
