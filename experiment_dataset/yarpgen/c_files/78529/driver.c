#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)4924;
_Bool var_6 = (_Bool)1;
short var_7 = (short)17020;
short var_8 = (short)10738;
short var_9 = (short)-1892;
signed char var_15 = (signed char)119;
int zero = 0;
signed char var_16 = (signed char)-27;
unsigned short var_17 = (unsigned short)28567;
int var_18 = -1104291269;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
