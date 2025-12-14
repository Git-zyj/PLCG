#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)6016;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 170846075U;
signed char var_17 = (signed char)102;
int zero = 0;
unsigned long long int var_20 = 8558149597670731152ULL;
unsigned long long int var_21 = 15494877137834971025ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
