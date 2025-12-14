#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
unsigned char var_2 = (unsigned char)248;
unsigned short var_4 = (unsigned short)25369;
unsigned long long int var_6 = 3775797204188173560ULL;
_Bool var_7 = (_Bool)0;
int var_8 = 1883417238;
unsigned char var_9 = (unsigned char)164;
int zero = 0;
unsigned long long int var_11 = 1391460749522606804ULL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)98;
long long int var_14 = 8036967673945587264LL;
unsigned char var_15 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
