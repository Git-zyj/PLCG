#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7718303837978625764LL;
_Bool var_6 = (_Bool)0;
int var_7 = 424508818;
_Bool var_8 = (_Bool)1;
long long int var_9 = 3897355149365570940LL;
unsigned char var_11 = (unsigned char)228;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 8049576478582368943ULL;
signed char var_16 = (signed char)-62;
unsigned short var_17 = (unsigned short)61767;
unsigned char var_18 = (unsigned char)56;
long long int var_19 = 3166848791525299058LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
