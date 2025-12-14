#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)108;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 15864396067820860626ULL;
int var_11 = -1382972118;
short var_12 = (short)1821;
unsigned int var_14 = 1893155528U;
signed char var_15 = (signed char)95;
unsigned char var_17 = (unsigned char)173;
long long int var_18 = 3008882376176008079LL;
int zero = 0;
unsigned long long int var_19 = 15441454814832243963ULL;
unsigned int var_20 = 785934689U;
unsigned short var_21 = (unsigned short)54632;
signed char var_22 = (signed char)13;
unsigned short var_23 = (unsigned short)52449;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
