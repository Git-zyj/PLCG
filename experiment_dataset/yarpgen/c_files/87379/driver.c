#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
unsigned char var_4 = (unsigned char)188;
long long int var_8 = -170706570736046414LL;
unsigned short var_9 = (unsigned short)30784;
signed char var_11 = (signed char)-112;
unsigned char var_12 = (unsigned char)250;
long long int var_13 = 8314811598170564750LL;
long long int var_14 = -292853384548748059LL;
int var_16 = -1530964386;
unsigned int var_17 = 4203188782U;
int zero = 0;
unsigned int var_19 = 2797542459U;
long long int var_20 = -4791861355421317780LL;
unsigned long long int var_21 = 3089460753799485119ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
