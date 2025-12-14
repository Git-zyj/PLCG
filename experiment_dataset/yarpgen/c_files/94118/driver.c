#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1203726530;
long long int var_1 = -7378239210605334243LL;
signed char var_2 = (signed char)12;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)15047;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 5333042634738627485ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)120;
unsigned long long int var_19 = 2981706376205083841ULL;
unsigned int var_20 = 803637861U;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-11273;
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
