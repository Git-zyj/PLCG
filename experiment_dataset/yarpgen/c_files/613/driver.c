#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3958331054566476732LL;
int var_1 = 1523236474;
unsigned short var_2 = (unsigned short)13666;
unsigned long long int var_4 = 8930343399625961226ULL;
signed char var_6 = (signed char)108;
long long int var_8 = -4870347453256571717LL;
signed char var_9 = (signed char)-68;
_Bool var_10 = (_Bool)0;
long long int var_11 = -6530376846747348177LL;
int zero = 0;
unsigned short var_12 = (unsigned short)64267;
signed char var_13 = (signed char)-3;
unsigned char var_14 = (unsigned char)235;
void init() {
}

void checksum() {
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
