#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
int var_2 = -798540944;
signed char var_3 = (signed char)14;
int var_4 = 510263406;
int var_5 = -1498432280;
_Bool var_8 = (_Bool)1;
long long int var_13 = 9141969778912347735LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)32741;
unsigned short var_18 = (unsigned short)63498;
int zero = 0;
long long int var_20 = 3757364086566577549LL;
long long int var_21 = -7387776544831546608LL;
int var_22 = -19683092;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
