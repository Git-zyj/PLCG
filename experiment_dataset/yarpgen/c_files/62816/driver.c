#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53846;
int var_3 = 1889841334;
unsigned long long int var_4 = 8737219521407328430ULL;
signed char var_6 = (signed char)-89;
short var_9 = (short)-25410;
unsigned long long int var_10 = 9348263265277164012ULL;
unsigned char var_14 = (unsigned char)224;
int zero = 0;
unsigned char var_15 = (unsigned char)49;
unsigned long long int var_16 = 13962530960287577444ULL;
long long int var_17 = 8679095320063352070LL;
unsigned short var_18 = (unsigned short)49930;
unsigned int var_19 = 1014568694U;
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
