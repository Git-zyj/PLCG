#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 468548251U;
long long int var_5 = -4717375690265683514LL;
unsigned short var_12 = (unsigned short)22845;
long long int var_13 = 3687023538415899508LL;
int zero = 0;
unsigned short var_15 = (unsigned short)17727;
unsigned long long int var_16 = 16978329886868034507ULL;
unsigned int var_17 = 2538881346U;
unsigned short var_18 = (unsigned short)62614;
unsigned char var_19 = (unsigned char)241;
unsigned short var_20 = (unsigned short)35830;
long long int var_21 = -825473605050940234LL;
long long int var_22 = -114323640573186030LL;
unsigned short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)55535;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
