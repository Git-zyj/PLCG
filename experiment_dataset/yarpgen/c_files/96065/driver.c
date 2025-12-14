#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 529451073U;
unsigned long long int var_5 = 5827337755621350301ULL;
unsigned long long int var_10 = 3303140590571279865ULL;
unsigned int var_11 = 2409663374U;
unsigned short var_15 = (unsigned short)51409;
unsigned short var_16 = (unsigned short)41510;
unsigned short var_18 = (unsigned short)49105;
unsigned long long int var_19 = 1045884465890270807ULL;
int zero = 0;
int var_20 = 1115116623;
short var_21 = (short)1039;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
