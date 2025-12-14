#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4133739540269799632LL;
unsigned long long int var_7 = 7121106635454212480ULL;
unsigned long long int var_8 = 10291420412832073052ULL;
int zero = 0;
signed char var_10 = (signed char)-18;
signed char var_11 = (signed char)0;
signed char var_12 = (signed char)-126;
unsigned long long int var_13 = 3996453277285460680ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
