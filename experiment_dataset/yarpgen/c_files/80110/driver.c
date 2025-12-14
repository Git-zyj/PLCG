#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5618444220923804633LL;
unsigned int var_1 = 3167097275U;
unsigned char var_2 = (unsigned char)149;
long long int var_3 = 6950079910103114LL;
unsigned char var_4 = (unsigned char)85;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int var_8 = -1240722703;
unsigned short var_9 = (unsigned short)21777;
signed char var_10 = (signed char)-124;
signed char var_11 = (signed char)82;
unsigned char var_12 = (unsigned char)2;
int var_13 = 1838128303;
unsigned int var_14 = 3347260983U;
int zero = 0;
unsigned int var_15 = 149625677U;
unsigned char var_16 = (unsigned char)253;
int var_17 = -1669566216;
signed char var_18 = (signed char)-69;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
