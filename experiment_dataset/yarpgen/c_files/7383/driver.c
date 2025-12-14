#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
signed char var_1 = (signed char)105;
unsigned char var_2 = (unsigned char)115;
signed char var_3 = (signed char)-85;
unsigned char var_4 = (unsigned char)58;
unsigned char var_5 = (unsigned char)184;
unsigned char var_6 = (unsigned char)85;
signed char var_8 = (signed char)-104;
signed char var_9 = (signed char)91;
unsigned char var_10 = (unsigned char)211;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-75;
unsigned char var_16 = (unsigned char)192;
signed char var_17 = (signed char)59;
unsigned char var_18 = (unsigned char)138;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
