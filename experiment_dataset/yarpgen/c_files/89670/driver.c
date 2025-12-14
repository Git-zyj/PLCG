#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
unsigned long long int var_1 = 4535955746208541411ULL;
unsigned int var_4 = 3386174017U;
signed char var_5 = (signed char)-11;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)41015;
unsigned long long int var_10 = 15176399251272997888ULL;
short var_11 = (short)-25151;
signed char var_12 = (signed char)-32;
int zero = 0;
long long int var_13 = -1930125869669395507LL;
unsigned char var_14 = (unsigned char)90;
unsigned long long int var_15 = 11355358560354970630ULL;
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
