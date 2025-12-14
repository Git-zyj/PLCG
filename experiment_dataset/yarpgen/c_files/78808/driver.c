#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -356252845792652225LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 2065569163979944563LL;
int zero = 0;
unsigned short var_12 = (unsigned short)58277;
int var_13 = -490435507;
unsigned long long int var_14 = 3365469002615357936ULL;
unsigned short var_15 = (unsigned short)43072;
unsigned long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2514031541502861825ULL : 8086508367814591724ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
