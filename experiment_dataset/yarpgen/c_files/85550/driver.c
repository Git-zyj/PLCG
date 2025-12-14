#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15774431161731242901ULL;
int var_2 = 1903747119;
long long int var_3 = -5535747822392755864LL;
signed char var_4 = (signed char)-63;
unsigned long long int var_11 = 7480972130658795850ULL;
long long int var_12 = -2145569922414821323LL;
short var_15 = (short)30314;
int zero = 0;
int var_16 = -1459974205;
long long int var_17 = -2001536568520181683LL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)9084;
void init() {
}

void checksum() {
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
