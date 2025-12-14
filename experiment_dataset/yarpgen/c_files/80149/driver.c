#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5562440442666542617ULL;
int var_1 = 682816682;
long long int var_3 = 6840553451978918546LL;
unsigned char var_4 = (unsigned char)191;
unsigned char var_6 = (unsigned char)119;
unsigned char var_8 = (unsigned char)95;
int var_10 = 634385249;
int zero = 0;
unsigned char var_14 = (unsigned char)120;
unsigned short var_15 = (unsigned short)9051;
int var_16 = -384491258;
unsigned short var_17 = (unsigned short)16655;
int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 379975273;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
