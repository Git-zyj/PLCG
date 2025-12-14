#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12364223537783579619ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 970992793U;
long long int var_6 = -6961858630304238074LL;
signed char var_7 = (signed char)-29;
unsigned char var_8 = (unsigned char)133;
unsigned long long int var_9 = 3536652511417841544ULL;
int var_10 = -1918793774;
int zero = 0;
unsigned char var_11 = (unsigned char)66;
unsigned int var_12 = 1549122455U;
short var_13 = (short)16366;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
