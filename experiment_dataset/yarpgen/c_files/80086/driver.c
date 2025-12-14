#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
unsigned long long int var_1 = 1259660132367959078ULL;
short var_2 = (short)30243;
unsigned int var_4 = 1872104872U;
unsigned long long int var_5 = 10156799350547606865ULL;
signed char var_6 = (signed char)116;
_Bool var_8 = (_Bool)0;
int var_9 = -1359681878;
unsigned int var_11 = 2505602056U;
int zero = 0;
unsigned short var_13 = (unsigned short)51023;
unsigned char var_14 = (unsigned char)19;
unsigned int var_15 = 4045759836U;
long long int var_16 = -3879615639867173863LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
