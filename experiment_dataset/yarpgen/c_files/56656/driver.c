#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2666026242184587053LL;
int var_1 = -1862677324;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int var_9 = -1198134618;
unsigned int var_11 = 3257492615U;
unsigned char var_12 = (unsigned char)76;
int var_14 = 39309315;
unsigned int var_15 = 1224240047U;
long long int var_16 = 9183106239112833605LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1449422268U;
void init() {
}

void checksum() {
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
