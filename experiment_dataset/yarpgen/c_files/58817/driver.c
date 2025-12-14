#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)191;
short var_3 = (short)-23332;
short var_4 = (short)-27919;
unsigned int var_5 = 1877053515U;
int var_8 = 324264009;
unsigned int var_9 = 3910152930U;
unsigned int var_12 = 1793202779U;
unsigned long long int var_13 = 6726631781496089401ULL;
unsigned long long int var_15 = 6512324928986714264ULL;
unsigned int var_16 = 3786897371U;
int zero = 0;
unsigned char var_18 = (unsigned char)20;
signed char var_19 = (signed char)-39;
_Bool var_20 = (_Bool)1;
long long int var_21 = 6831547342798522868LL;
unsigned long long int var_22 = 2261533272109170304ULL;
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
