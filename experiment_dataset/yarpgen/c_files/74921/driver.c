#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1764705976U;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 1240667064U;
unsigned char var_5 = (unsigned char)241;
unsigned char var_7 = (unsigned char)165;
unsigned long long int var_9 = 5068103084380761291ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)4587;
unsigned long long int var_12 = 12982414035250051052ULL;
int zero = 0;
int var_13 = -245364891;
long long int var_14 = 9068618659222188386LL;
int var_15 = -1818621950;
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
