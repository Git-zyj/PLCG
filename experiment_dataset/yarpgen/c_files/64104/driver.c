#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
long long int var_5 = -3215755587904308476LL;
signed char var_6 = (signed char)35;
long long int var_7 = 3153342343146628220LL;
long long int var_11 = 7472544388340283341LL;
unsigned long long int var_12 = 11201186254950132641ULL;
int zero = 0;
signed char var_13 = (signed char)-41;
unsigned long long int var_14 = 4139370040343855465ULL;
short var_15 = (short)6845;
long long int var_16 = 1811043117005317960LL;
signed char var_17 = (signed char)35;
unsigned long long int var_18 = 6324773167929394466ULL;
unsigned short var_19 = (unsigned short)58657;
unsigned long long int var_20 = 1555171541179094053ULL;
short arr_0 [25] ;
short arr_1 [25] ;
long long int arr_2 [25] ;
short arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)8958;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-25912;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 8610464359443563374LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)294;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
