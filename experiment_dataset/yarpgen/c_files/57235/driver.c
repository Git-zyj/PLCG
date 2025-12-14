#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13131;
int var_1 = -1844731620;
unsigned short var_3 = (unsigned short)53514;
int var_4 = -1392823399;
unsigned short var_5 = (unsigned short)38855;
signed char var_7 = (signed char)-78;
short var_9 = (short)-28439;
unsigned int var_10 = 732144173U;
signed char var_13 = (signed char)4;
short var_14 = (short)-18082;
unsigned char var_15 = (unsigned char)251;
unsigned short var_16 = (unsigned short)63611;
long long int var_18 = 5395540257398189217LL;
signed char var_19 = (signed char)-82;
int zero = 0;
signed char var_20 = (signed char)32;
unsigned short var_21 = (unsigned short)13338;
unsigned char var_22 = (unsigned char)224;
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
