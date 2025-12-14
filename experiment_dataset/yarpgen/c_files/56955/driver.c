#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 894285694U;
short var_1 = (short)25627;
signed char var_2 = (signed char)-51;
short var_5 = (short)8195;
long long int var_6 = 8217422665983972716LL;
unsigned char var_8 = (unsigned char)68;
unsigned int var_9 = 1916978439U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)125;
int zero = 0;
unsigned char var_13 = (unsigned char)152;
unsigned char var_14 = (unsigned char)209;
unsigned char var_15 = (unsigned char)162;
void init() {
}

void checksum() {
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
