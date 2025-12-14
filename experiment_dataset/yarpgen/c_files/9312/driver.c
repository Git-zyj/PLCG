#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3814817919496465481ULL;
unsigned int var_5 = 4268651162U;
signed char var_8 = (signed char)104;
unsigned long long int var_9 = 746266674296074118ULL;
unsigned int var_11 = 2072785238U;
unsigned char var_15 = (unsigned char)64;
signed char var_19 = (signed char)104;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8832985951395357508LL;
unsigned int var_22 = 5065776U;
unsigned int var_23 = 1523230910U;
unsigned int var_24 = 2464551151U;
long long int var_25 = -238970098420413024LL;
signed char arr_0 [24] [24] ;
short arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-9939;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
