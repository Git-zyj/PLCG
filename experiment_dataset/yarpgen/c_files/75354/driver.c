#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)209;
signed char var_2 = (signed char)123;
long long int var_4 = -6555772795520470494LL;
short var_5 = (short)23885;
int var_6 = -1321050583;
short var_7 = (short)18775;
unsigned char var_8 = (unsigned char)76;
unsigned int var_10 = 3390134890U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 2166144983U;
signed char var_13 = (signed char)-12;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
