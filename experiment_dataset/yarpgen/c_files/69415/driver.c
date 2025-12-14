#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)15;
short var_6 = (short)3095;
unsigned char var_7 = (unsigned char)84;
short var_9 = (short)-25434;
_Bool var_11 = (_Bool)0;
long long int var_12 = -5153342202765821129LL;
long long int var_13 = -5744345058391291570LL;
unsigned int var_15 = 3951113816U;
int zero = 0;
long long int var_17 = 2617014255724846582LL;
unsigned int var_18 = 1718450387U;
unsigned long long int var_19 = 12289172576024078592ULL;
unsigned int var_20 = 1810883104U;
int var_21 = -1886401582;
long long int arr_10 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 4377522270867708716LL : 2540060861184568123LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
