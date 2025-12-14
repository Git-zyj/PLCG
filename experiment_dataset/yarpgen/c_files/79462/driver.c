#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3295185730231079850LL;
unsigned long long int var_2 = 1006307313121709279ULL;
unsigned short var_4 = (unsigned short)51291;
unsigned long long int var_7 = 12497754795346634408ULL;
unsigned short var_9 = (unsigned short)14259;
long long int var_10 = -1273447146790858454LL;
unsigned char var_11 = (unsigned char)150;
int zero = 0;
unsigned char var_12 = (unsigned char)108;
signed char var_13 = (signed char)5;
void init() {
}

void checksum() {
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
