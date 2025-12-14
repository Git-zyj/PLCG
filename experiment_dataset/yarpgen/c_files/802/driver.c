#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 6728222322646764094LL;
short var_4 = (short)-5903;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 13321684444864826473ULL;
long long int var_8 = 6225873721458626779LL;
unsigned short var_9 = (unsigned short)60592;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-20827;
int zero = 0;
long long int var_14 = -8779143787925014174LL;
short var_15 = (short)14117;
signed char var_16 = (signed char)126;
unsigned long long int var_17 = 250299045117578802ULL;
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
