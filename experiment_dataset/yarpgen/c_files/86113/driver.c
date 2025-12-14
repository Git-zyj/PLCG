#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)4067;
short var_6 = (short)1463;
int var_7 = 2114854669;
int var_11 = -1277225715;
long long int var_14 = -4082393547646328958LL;
int zero = 0;
unsigned long long int var_19 = 2043568460496809402ULL;
long long int var_20 = -5996866506875175077LL;
unsigned short var_21 = (unsigned short)9328;
_Bool var_22 = (_Bool)1;
unsigned int arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 772946221U;
}

void checksum() {
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
