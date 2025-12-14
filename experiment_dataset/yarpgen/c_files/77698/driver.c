#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32809;
int var_3 = 247456804;
unsigned char var_5 = (unsigned char)56;
unsigned long long int var_12 = 311592444416640928ULL;
unsigned char var_14 = (unsigned char)43;
int zero = 0;
unsigned short var_18 = (unsigned short)54676;
int var_19 = -2105858817;
short var_20 = (short)1348;
unsigned int var_21 = 3523891601U;
unsigned short arr_0 [24] ;
long long int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)11567;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -2862760848931070481LL;
}

void checksum() {
    hash(&seed, var_18);
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
