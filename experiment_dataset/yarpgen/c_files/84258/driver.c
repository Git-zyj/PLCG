#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2561645166682716984LL;
int var_4 = -1790223835;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-118;
unsigned char var_9 = (unsigned char)204;
signed char var_10 = (signed char)-8;
int zero = 0;
unsigned short var_17 = (unsigned short)19184;
unsigned int var_18 = 3241317074U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
