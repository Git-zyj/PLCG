#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 827463165U;
_Bool var_9 = (_Bool)1;
int var_10 = 1306984927;
unsigned int var_13 = 4175574366U;
short var_14 = (short)10822;
int zero = 0;
unsigned char var_18 = (unsigned char)208;
unsigned int var_19 = 1734729330U;
int var_20 = 1587903040;
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
