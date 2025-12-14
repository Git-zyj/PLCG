#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13614229145076165423ULL;
long long int var_2 = 6031423625003768921LL;
unsigned long long int var_3 = 18062657811940023547ULL;
unsigned char var_4 = (unsigned char)92;
unsigned char var_6 = (unsigned char)15;
unsigned short var_7 = (unsigned short)13504;
signed char var_9 = (signed char)-83;
int zero = 0;
unsigned int var_11 = 316146999U;
unsigned char var_12 = (unsigned char)252;
long long int var_13 = 5296436291687878974LL;
unsigned char var_14 = (unsigned char)209;
unsigned long long int var_15 = 7503953144327503223ULL;
unsigned char var_16 = (unsigned char)88;
signed char var_17 = (signed char)27;
long long int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -2492181179391842635LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 16835870707298577677ULL;
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
