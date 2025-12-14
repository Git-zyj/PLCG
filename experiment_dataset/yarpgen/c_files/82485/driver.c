#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)233;
unsigned int var_4 = 1381143703U;
unsigned short var_5 = (unsigned short)56736;
unsigned char var_9 = (unsigned char)229;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 17308584427433871294ULL;
signed char var_19 = (signed char)118;
short var_20 = (short)-5915;
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
