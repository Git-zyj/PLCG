#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)19874;
long long int var_3 = 802637030345624674LL;
long long int var_4 = 2053678354708042718LL;
int var_6 = 1103647337;
unsigned char var_10 = (unsigned char)224;
signed char var_12 = (signed char)107;
int zero = 0;
long long int var_13 = 2680036766681290578LL;
unsigned int var_14 = 2491126303U;
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
