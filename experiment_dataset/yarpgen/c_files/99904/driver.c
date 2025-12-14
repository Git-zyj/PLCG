#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)97;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 473093697U;
unsigned char var_6 = (unsigned char)193;
_Bool var_7 = (_Bool)1;
long long int var_10 = -5935088100437612388LL;
unsigned char var_11 = (unsigned char)170;
signed char var_12 = (signed char)-23;
unsigned long long int var_13 = 8325934208442868256ULL;
unsigned short var_14 = (unsigned short)32883;
unsigned long long int var_15 = 17637781284467080721ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)57579;
short var_17 = (short)-9082;
unsigned char var_18 = (unsigned char)120;
unsigned int var_19 = 1027609525U;
short var_20 = (short)-3147;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
