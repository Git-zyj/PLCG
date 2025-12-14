#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)64956;
signed char var_6 = (signed char)85;
signed char var_8 = (signed char)113;
signed char var_9 = (signed char)-29;
signed char var_11 = (signed char)-58;
int zero = 0;
long long int var_19 = -6386674435174849290LL;
unsigned char var_20 = (unsigned char)78;
void init() {
}

void checksum() {
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
