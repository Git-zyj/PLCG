#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5151433536911315455ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_10 = (unsigned char)255;
signed char var_13 = (signed char)24;
int zero = 0;
signed char var_19 = (signed char)0;
long long int var_20 = -4125308768942350381LL;
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
