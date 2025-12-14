#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)86;
short var_3 = (short)15904;
unsigned char var_5 = (unsigned char)180;
long long int var_8 = 5039885108914311672LL;
unsigned int var_11 = 2165937058U;
unsigned long long int var_12 = 9996516660056876868ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_18 = 499377233;
int var_19 = 350840170;
unsigned char var_20 = (unsigned char)95;
void init() {
}

void checksum() {
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
