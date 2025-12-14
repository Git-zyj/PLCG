#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1029467249132989890ULL;
unsigned long long int var_3 = 16442328054025127301ULL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-38;
unsigned long long int var_17 = 11208404133998360714ULL;
unsigned char var_18 = (unsigned char)126;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3496923944U;
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
