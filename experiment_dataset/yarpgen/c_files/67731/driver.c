#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-22;
signed char var_5 = (signed char)-23;
signed char var_6 = (signed char)-55;
signed char var_7 = (signed char)2;
unsigned char var_8 = (unsigned char)122;
short var_11 = (short)8918;
long long int var_12 = -7388281631635290616LL;
int zero = 0;
unsigned long long int var_13 = 1693863037128869856ULL;
unsigned long long int var_14 = 4281674038423558623ULL;
void init() {
}

void checksum() {
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
