#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -142581065;
signed char var_3 = (signed char)13;
short var_4 = (short)-11724;
_Bool var_7 = (_Bool)1;
long long int var_8 = 7270769709499349956LL;
int var_10 = -127757707;
int zero = 0;
unsigned short var_12 = (unsigned short)18164;
long long int var_13 = 4237480472850593748LL;
unsigned int var_14 = 3494327595U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
