#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-60;
signed char var_7 = (signed char)102;
unsigned char var_9 = (unsigned char)251;
signed char var_11 = (signed char)83;
int zero = 0;
unsigned char var_16 = (unsigned char)202;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2520988039U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
