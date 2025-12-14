#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12557514590018013374ULL;
signed char var_1 = (signed char)-32;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 988958517570979704ULL;
unsigned long long int var_8 = 14723308139405997446ULL;
unsigned long long int var_12 = 3112404206483984583ULL;
unsigned char var_15 = (unsigned char)69;
long long int var_16 = 1584192555206464457LL;
signed char var_17 = (signed char)65;
int zero = 0;
unsigned long long int var_18 = 11378579288754996279ULL;
long long int var_19 = 5458536224403407442LL;
short var_20 = (short)29205;
unsigned long long int var_21 = 1830249893810451633ULL;
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
