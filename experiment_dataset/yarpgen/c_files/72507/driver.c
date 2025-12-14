#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
unsigned long long int var_3 = 11054225115685401273ULL;
unsigned short var_6 = (unsigned short)61437;
unsigned short var_12 = (unsigned short)37435;
int zero = 0;
int var_17 = 941433914;
unsigned int var_18 = 3101223256U;
unsigned long long int var_19 = 6393484754191365295ULL;
long long int arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -4893679726978981202LL;
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
