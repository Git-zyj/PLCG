#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25803;
short var_1 = (short)7663;
unsigned int var_2 = 3628570095U;
signed char var_3 = (signed char)-51;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3833792597U;
unsigned char var_6 = (unsigned char)144;
unsigned long long int var_7 = 10275972023860386891ULL;
unsigned short var_9 = (unsigned short)27486;
int var_10 = -1597917056;
short var_11 = (short)31038;
long long int var_12 = 7904537644529060909LL;
int zero = 0;
signed char var_14 = (signed char)-72;
short var_15 = (short)3137;
unsigned short var_16 = (unsigned short)47423;
unsigned short var_17 = (unsigned short)12334;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
