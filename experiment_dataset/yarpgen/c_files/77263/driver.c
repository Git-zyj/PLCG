#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)188;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 927973047391077894ULL;
signed char var_11 = (signed char)-93;
unsigned short var_12 = (unsigned short)18571;
int zero = 0;
long long int var_13 = -6736320010201143904LL;
short var_14 = (short)3499;
unsigned long long int var_15 = 18395953421538934449ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
