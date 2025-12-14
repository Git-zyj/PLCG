#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 1550891947U;
unsigned long long int var_12 = 3856209273624639057ULL;
unsigned int var_14 = 310098492U;
unsigned char var_15 = (unsigned char)142;
unsigned int var_16 = 851562314U;
short var_17 = (short)15424;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)104;
long long int var_21 = -8465707030246707060LL;
signed char var_22 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
