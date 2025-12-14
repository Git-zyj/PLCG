#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)41;
long long int var_7 = 4719579196994729356LL;
int var_10 = -1737879532;
unsigned char var_13 = (unsigned char)146;
unsigned long long int var_16 = 4915109743134936764ULL;
int zero = 0;
int var_20 = -439183547;
signed char var_21 = (signed char)32;
unsigned char var_22 = (unsigned char)102;
unsigned long long int var_23 = 3915261163853505823ULL;
unsigned char var_24 = (unsigned char)68;
int arr_5 [14] ;
signed char arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -671295382;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (signed char)56;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
