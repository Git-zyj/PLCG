#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7184372103281955549ULL;
unsigned long long int var_7 = 2308634067973985228ULL;
int var_8 = 73020388;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)46925;
int var_19 = 1039831721;
unsigned short var_20 = (unsigned short)7005;
long long int var_21 = 6192360173670906524LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
