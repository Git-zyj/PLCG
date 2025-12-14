#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5627549878164398885LL;
int var_5 = 476425926;
unsigned short var_7 = (unsigned short)17139;
unsigned char var_9 = (unsigned char)102;
int zero = 0;
int var_11 = 470965412;
long long int var_12 = 6321001991455717745LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
