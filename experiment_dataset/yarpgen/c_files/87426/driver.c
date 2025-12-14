#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -549907998;
unsigned short var_2 = (unsigned short)50373;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 13852643857952666126ULL;
unsigned int var_8 = 4019176315U;
unsigned short var_11 = (unsigned short)40677;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-50;
void init() {
}

void checksum() {
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
