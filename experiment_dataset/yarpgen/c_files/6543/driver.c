#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5692352711766151940ULL;
short var_1 = (short)18040;
unsigned long long int var_4 = 16478564392692583490ULL;
unsigned int var_6 = 1354251106U;
unsigned int var_9 = 152198152U;
unsigned long long int var_11 = 14811467015309744637ULL;
int var_12 = 1600339251;
unsigned char var_15 = (unsigned char)34;
unsigned short var_16 = (unsigned short)56765;
int zero = 0;
int var_17 = -1402145500;
unsigned int var_18 = 2934309433U;
int var_19 = 1326124177;
_Bool var_20 = (_Bool)0;
long long int var_21 = -5628138233876778341LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
