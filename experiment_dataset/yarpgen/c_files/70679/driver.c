#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)24974;
unsigned long long int var_10 = 1441379080595742359ULL;
unsigned long long int var_11 = 1149159476443843870ULL;
signed char var_13 = (signed char)-122;
int var_14 = -1965886092;
unsigned long long int var_15 = 13206933225181943009ULL;
int zero = 0;
unsigned long long int var_17 = 8467920398375746094ULL;
unsigned char var_18 = (unsigned char)188;
unsigned char var_19 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
