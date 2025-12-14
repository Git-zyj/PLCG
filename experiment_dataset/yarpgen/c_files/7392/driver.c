#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
unsigned char var_2 = (unsigned char)140;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)93;
unsigned char var_5 = (unsigned char)224;
unsigned int var_6 = 4142358307U;
unsigned short var_7 = (unsigned short)4671;
short var_8 = (short)-25701;
unsigned long long int var_9 = 10502936936750191564ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 1009557451;
signed char var_12 = (signed char)22;
unsigned char var_13 = (unsigned char)243;
_Bool var_14 = (_Bool)0;
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
