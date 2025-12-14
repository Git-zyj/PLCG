#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11893522630424885905ULL;
short var_3 = (short)31514;
unsigned short var_4 = (unsigned short)55914;
long long int var_5 = 4968120756166355929LL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-3906;
unsigned char var_8 = (unsigned char)104;
int zero = 0;
unsigned short var_11 = (unsigned short)14578;
signed char var_12 = (signed char)-3;
int var_13 = -2041036016;
unsigned short var_14 = (unsigned short)16636;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
