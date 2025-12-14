#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -905359980;
long long int var_1 = 5643940535522549073LL;
signed char var_2 = (signed char)78;
unsigned int var_3 = 411331248U;
unsigned int var_5 = 1558075403U;
unsigned int var_6 = 1098357518U;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-125;
int zero = 0;
unsigned int var_11 = 4009561493U;
unsigned int var_12 = 2368489446U;
unsigned char var_13 = (unsigned char)223;
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
