#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1447549248;
unsigned int var_1 = 3130436168U;
unsigned long long int var_2 = 16292097082446651420ULL;
unsigned int var_3 = 1439024088U;
long long int var_4 = -6243937554603816456LL;
signed char var_5 = (signed char)4;
int var_6 = -1914659067;
unsigned short var_8 = (unsigned short)57142;
unsigned short var_9 = (unsigned short)31746;
unsigned int var_10 = 2992764962U;
signed char var_11 = (signed char)-67;
short var_12 = (short)-14076;
long long int var_13 = 3442874988555811180LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -1874537970605512093LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 4208284369U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
