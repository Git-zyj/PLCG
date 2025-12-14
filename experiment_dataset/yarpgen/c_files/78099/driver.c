#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 377832158269689601LL;
long long int var_2 = -5053658218804088015LL;
int zero = 0;
signed char var_11 = (signed char)57;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)167;
long long int var_14 = -2725865324230879147LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
