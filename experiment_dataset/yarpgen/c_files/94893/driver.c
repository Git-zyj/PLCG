#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 16695874318718494602ULL;
long long int var_18 = -5245687492309244704LL;
int zero = 0;
unsigned char var_20 = (unsigned char)156;
unsigned long long int var_21 = 16255356714589837229ULL;
unsigned char var_22 = (unsigned char)96;
long long int var_23 = 7837667343617094645LL;
unsigned long long int arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3024241592710431107ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
