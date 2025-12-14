#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4157278712214877124LL;
short var_1 = (short)12484;
unsigned long long int var_2 = 17057972916046516998ULL;
unsigned long long int var_3 = 10401602740420901256ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = -7650550548742327750LL;
unsigned int var_8 = 4077782470U;
unsigned long long int var_9 = 15922094575218910794ULL;
unsigned char var_10 = (unsigned char)154;
unsigned int var_11 = 1456635449U;
long long int var_13 = -4501777131354856145LL;
unsigned short var_17 = (unsigned short)37669;
int zero = 0;
signed char var_18 = (signed char)-107;
short var_19 = (short)32705;
signed char var_20 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
