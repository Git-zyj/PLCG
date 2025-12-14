#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)48412;
unsigned short var_6 = (unsigned short)32581;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)187;
unsigned short var_12 = (unsigned short)44295;
int var_14 = -1314554036;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 9399928608165049790ULL;
signed char var_18 = (signed char)-27;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 590129634988201687ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
