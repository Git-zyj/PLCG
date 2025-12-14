#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41821;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 11067293507148811054ULL;
int var_7 = -2100532059;
short var_10 = (short)-29834;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-39;
unsigned long long int var_16 = 12704488535696509835ULL;
unsigned long long int var_17 = 5928644230276142445ULL;
int zero = 0;
int var_18 = -1349239204;
unsigned long long int var_19 = 3151804290181756633ULL;
unsigned long long int var_20 = 8997256729133719409ULL;
unsigned int var_21 = 1900199603U;
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
