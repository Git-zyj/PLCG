#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37598;
unsigned char var_2 = (unsigned char)30;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 2938940843241119864ULL;
signed char var_6 = (signed char)68;
unsigned short var_9 = (unsigned short)41341;
int zero = 0;
signed char var_11 = (signed char)-62;
unsigned short var_12 = (unsigned short)13956;
unsigned long long int var_13 = 14557625240242785573ULL;
int var_14 = -1633313223;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
