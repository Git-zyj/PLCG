#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 5850479409294181754ULL;
short var_2 = (short)20456;
unsigned char var_3 = (unsigned char)46;
unsigned int var_4 = 1874830073U;
unsigned char var_6 = (unsigned char)252;
unsigned short var_7 = (unsigned short)28348;
unsigned short var_8 = (unsigned short)33802;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)50;
unsigned char var_11 = (unsigned char)155;
unsigned long long int var_12 = 14068238072673188667ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 4678737529212775634ULL;
unsigned short var_16 = (unsigned short)25297;
int zero = 0;
unsigned long long int var_18 = 16617359636803748200ULL;
unsigned long long int var_19 = 2726801035623013985ULL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)23909;
signed char var_22 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
