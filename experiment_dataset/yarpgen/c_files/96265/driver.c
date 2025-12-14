#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
unsigned char var_1 = (unsigned char)15;
_Bool var_3 = (_Bool)0;
long long int var_9 = -7519562140539744828LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -524573770;
long long int var_16 = 8725175033419482027LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
