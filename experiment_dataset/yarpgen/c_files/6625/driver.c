#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)226;
short var_4 = (short)-20135;
int var_9 = 2087148934;
signed char var_12 = (signed char)-7;
unsigned short var_13 = (unsigned short)16527;
int var_14 = -1891313933;
unsigned char var_16 = (unsigned char)52;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 10337928703884752795ULL;
unsigned int var_19 = 2616198903U;
int var_20 = 695590213;
long long int var_21 = -214035606489074013LL;
unsigned long long int var_22 = 6706350341123290423ULL;
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
