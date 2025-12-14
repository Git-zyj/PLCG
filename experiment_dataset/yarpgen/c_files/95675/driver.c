#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1664336224;
_Bool var_2 = (_Bool)1;
short var_3 = (short)29530;
signed char var_5 = (signed char)114;
long long int var_6 = 3118784926405778029LL;
long long int var_7 = -3733003211602308027LL;
unsigned short var_8 = (unsigned short)10160;
signed char var_9 = (signed char)-107;
unsigned short var_10 = (unsigned short)39930;
int zero = 0;
short var_11 = (short)-9316;
int var_12 = -1290870692;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
