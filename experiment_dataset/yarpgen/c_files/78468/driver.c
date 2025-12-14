#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2833062468U;
unsigned char var_4 = (unsigned char)52;
unsigned int var_5 = 4117600452U;
signed char var_6 = (signed char)(-127 - 1);
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)71;
signed char var_14 = (signed char)45;
int zero = 0;
unsigned char var_17 = (unsigned char)18;
unsigned long long int var_18 = 7002512843325265658ULL;
unsigned long long int var_19 = 1416784679929185072ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
