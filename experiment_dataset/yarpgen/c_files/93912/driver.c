#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 10908722538761843146ULL;
int zero = 0;
long long int var_11 = -4535096182964933041LL;
signed char var_12 = (signed char)40;
unsigned char var_13 = (unsigned char)219;
signed char var_14 = (signed char)-88;
long long int var_15 = -8131147826898082173LL;
unsigned char var_16 = (unsigned char)143;
unsigned short var_17 = (unsigned short)54925;
unsigned short arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)57640;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
