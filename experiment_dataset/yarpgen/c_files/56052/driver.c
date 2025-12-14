#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24888;
int var_1 = 2062023280;
long long int var_3 = -8376976217885102199LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-8989;
signed char var_6 = (signed char)-29;
_Bool var_7 = (_Bool)0;
int var_8 = 126560380;
int zero = 0;
unsigned short var_10 = (unsigned short)37615;
unsigned short var_11 = (unsigned short)12320;
long long int var_12 = -4896173501352475882LL;
unsigned int var_13 = 779316754U;
short var_14 = (short)-430;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
