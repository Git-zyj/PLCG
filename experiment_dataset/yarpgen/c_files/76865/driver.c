#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29675;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)131;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 8672697358796018984ULL;
unsigned char var_15 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
