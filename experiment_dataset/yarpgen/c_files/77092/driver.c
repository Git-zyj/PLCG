#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1809177048U;
signed char var_2 = (signed char)-16;
signed char var_3 = (signed char)-110;
unsigned long long int var_6 = 3407292261865669655ULL;
int var_7 = -2136933250;
unsigned long long int var_8 = 6086361215403770801ULL;
long long int var_12 = 3010318193795971408LL;
int zero = 0;
unsigned long long int var_14 = 16015085322012954726ULL;
unsigned short var_15 = (unsigned short)5880;
int var_16 = 714296476;
unsigned short var_17 = (unsigned short)46184;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 146677173936092843LL : -6264440604746326664LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
