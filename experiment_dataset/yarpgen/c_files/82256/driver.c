#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2130344920547563838LL;
long long int var_2 = -690938455408429283LL;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 538649080U;
signed char var_10 = (signed char)-77;
unsigned char var_12 = (unsigned char)135;
int zero = 0;
long long int var_14 = -2463317708428945290LL;
unsigned int var_15 = 1181860795U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
