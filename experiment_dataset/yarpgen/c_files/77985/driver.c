#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10758017026972374447ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)207;
unsigned int var_10 = 1088577887U;
int zero = 0;
signed char var_11 = (signed char)12;
unsigned long long int var_12 = 7216243258710362335ULL;
int var_13 = -1706020686;
void init() {
}

void checksum() {
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
