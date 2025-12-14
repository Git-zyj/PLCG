#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)45;
unsigned long long int var_4 = 11593811531781092187ULL;
signed char var_7 = (signed char)64;
signed char var_8 = (signed char)126;
unsigned short var_10 = (unsigned short)59667;
unsigned short var_11 = (unsigned short)31898;
unsigned int var_12 = 1875276188U;
int zero = 0;
short var_18 = (short)27258;
short var_19 = (short)6201;
long long int var_20 = 8913268363657963189LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 17974629727056617364ULL;
unsigned long long int arr_0 [22] ;
unsigned short arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 15574068785164008875ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)28788;
}

void checksum() {
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
