#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29801;
long long int var_7 = 667221204864967851LL;
int var_8 = 128402671;
unsigned long long int var_9 = 17446559348817509006ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_16 = 17609269956242405453ULL;
unsigned char var_19 = (unsigned char)19;
int zero = 0;
signed char var_20 = (signed char)-80;
int var_21 = 1778826277;
void init() {
}

void checksum() {
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
