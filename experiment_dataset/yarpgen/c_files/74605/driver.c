#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-98;
long long int var_4 = 4115457419562404154LL;
short var_8 = (short)-12582;
long long int var_9 = 6039431693225551151LL;
unsigned long long int var_10 = 8195320352039302703ULL;
signed char var_11 = (signed char)-10;
unsigned long long int var_13 = 16994136667927319185ULL;
unsigned long long int var_15 = 10409589834631949838ULL;
unsigned short var_19 = (unsigned short)23195;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)56;
unsigned long long int var_22 = 18396301322181752389ULL;
short var_23 = (short)27504;
signed char var_24 = (signed char)-43;
unsigned int arr_1 [20] ;
short arr_2 [20] ;
long long int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1178070329U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)6091;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 4360307408441687238LL;
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
