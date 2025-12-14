#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-63;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)61;
unsigned short var_10 = (unsigned short)22419;
signed char var_11 = (signed char)103;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)54482;
signed char var_17 = (signed char)-90;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -1363519213030769757LL;
long long int var_20 = 8347814076332256435LL;
short var_21 = (short)-13230;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
