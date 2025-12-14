#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35708;
unsigned long long int var_3 = 18311816877532835876ULL;
unsigned char var_5 = (unsigned char)131;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-51;
unsigned long long int var_9 = 6090212842895446712ULL;
int zero = 0;
long long int var_10 = -1088421507187617252LL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 148176711U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
