#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-55;
unsigned short var_4 = (unsigned short)10947;
short var_5 = (short)-806;
_Bool var_8 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)104;
unsigned char var_18 = (unsigned char)255;
int zero = 0;
signed char var_19 = (signed char)-65;
unsigned char var_20 = (unsigned char)248;
signed char var_21 = (signed char)94;
short var_22 = (short)31616;
long long int var_23 = 3526376380514873044LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
