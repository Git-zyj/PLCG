#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
signed char var_1 = (signed char)-106;
signed char var_2 = (signed char)117;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-69;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)85;
signed char var_13 = (signed char)-65;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)107;
signed char var_19 = (signed char)-25;
signed char var_20 = (signed char)-90;
void init() {
}

void checksum() {
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
