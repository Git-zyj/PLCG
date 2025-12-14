#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
unsigned char var_1 = (unsigned char)164;
unsigned int var_2 = 98456450U;
signed char var_3 = (signed char)-117;
short var_5 = (short)-27196;
unsigned int var_6 = 3648467187U;
unsigned int var_9 = 3944291213U;
unsigned int var_10 = 1345658359U;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-121;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5216724399404672716LL;
int zero = 0;
short var_16 = (short)7987;
signed char var_17 = (signed char)-62;
int var_18 = 76805408;
signed char var_19 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
