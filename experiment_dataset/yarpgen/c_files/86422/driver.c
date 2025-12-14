#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
long long int var_1 = -2958060616616621445LL;
long long int var_4 = -3794711916341503009LL;
int var_7 = 747380648;
unsigned long long int var_9 = 13231446198475629498ULL;
unsigned int var_13 = 1777321408U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 2460114324U;
unsigned int var_16 = 583612217U;
unsigned long long int var_17 = 6293167028062357376ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
