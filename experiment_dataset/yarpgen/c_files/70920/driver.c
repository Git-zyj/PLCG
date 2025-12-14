#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)112;
long long int var_2 = -5288166431357715065LL;
unsigned char var_3 = (unsigned char)143;
long long int var_4 = -1761534828142235305LL;
long long int var_5 = -3843829320288908073LL;
long long int var_6 = -5616170149845646816LL;
int var_7 = 1013735190;
long long int var_8 = -7127677731264297074LL;
int var_9 = 479609612;
int zero = 0;
signed char var_11 = (signed char)-33;
unsigned short var_12 = (unsigned short)33071;
long long int var_13 = -3725625559033705412LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 2165456558801516141LL;
unsigned int var_16 = 2519526251U;
short arr_0 [24] ;
long long int arr_1 [24] [24] ;
unsigned long long int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-19701;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 7483166989515651739LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 9725978186310769439ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
