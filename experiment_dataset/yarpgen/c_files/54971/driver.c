#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = -637349465;
unsigned int var_8 = 259525254U;
unsigned char var_9 = (unsigned char)54;
unsigned int var_15 = 3160888176U;
int zero = 0;
unsigned long long int var_18 = 989057660580412950ULL;
signed char var_19 = (signed char)6;
void init() {
}

void checksum() {
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
