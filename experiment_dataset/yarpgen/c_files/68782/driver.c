#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 523135005998899157ULL;
unsigned long long int var_1 = 17346448178540350801ULL;
unsigned long long int var_2 = 11777684375437722789ULL;
unsigned long long int var_3 = 9831735930521928646ULL;
unsigned long long int var_4 = 10295604955931908622ULL;
unsigned long long int var_5 = 16102362284596944793ULL;
unsigned long long int var_6 = 15605588554009793282ULL;
unsigned long long int var_9 = 5832734842812068498ULL;
unsigned long long int var_10 = 1122666676678789616ULL;
int zero = 0;
unsigned long long int var_12 = 4108363576978988307ULL;
unsigned long long int var_13 = 2946918211487438074ULL;
unsigned long long int var_14 = 14178938142983529785ULL;
void init() {
}

void checksum() {
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
