#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3750378849U;
unsigned short var_3 = (unsigned short)14542;
unsigned long long int var_4 = 17689667095537410732ULL;
unsigned int var_5 = 3784205798U;
unsigned int var_8 = 2597693325U;
unsigned short var_10 = (unsigned short)49136;
long long int var_12 = -1036735156831714876LL;
long long int var_16 = 2410692992244419995LL;
signed char var_17 = (signed char)26;
int zero = 0;
unsigned char var_20 = (unsigned char)28;
unsigned int var_21 = 2546277036U;
int var_22 = -255924636;
void init() {
}

void checksum() {
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
