#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1108471525;
signed char var_3 = (signed char)121;
signed char var_4 = (signed char)94;
short var_5 = (short)23343;
signed char var_8 = (signed char)-46;
int zero = 0;
unsigned int var_10 = 1184176745U;
unsigned int var_11 = 1572292602U;
long long int var_12 = 1957388660958105039LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
