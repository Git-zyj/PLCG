#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -793947198;
unsigned long long int var_2 = 16951472451114999013ULL;
unsigned long long int var_4 = 17454811195792912748ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 4832167792079287960ULL;
int var_9 = -619755618;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)19722;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
