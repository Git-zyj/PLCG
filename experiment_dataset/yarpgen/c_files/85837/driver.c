#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 561909266;
unsigned short var_2 = (unsigned short)18118;
int var_3 = -595775327;
unsigned short var_5 = (unsigned short)44232;
unsigned short var_6 = (unsigned short)8413;
int var_7 = -1621261239;
_Bool var_9 = (_Bool)0;
int var_10 = -1464530627;
int var_11 = 474915438;
int zero = 0;
int var_12 = 1259633573;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
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
