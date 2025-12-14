#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)142;
unsigned long long int var_2 = 11667838332652466914ULL;
int var_3 = -1036558433;
signed char var_5 = (signed char)28;
long long int var_7 = -5860353667134432211LL;
long long int var_8 = -9208057152122298531LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_13 = 1656491728;
unsigned char var_14 = (unsigned char)229;
unsigned int var_15 = 284048883U;
_Bool var_16 = (_Bool)1;
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
