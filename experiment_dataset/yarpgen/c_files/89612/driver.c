#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10727585862084732747ULL;
unsigned long long int var_2 = 17979451946703935011ULL;
short var_3 = (short)-16451;
unsigned int var_6 = 4113797918U;
unsigned long long int var_8 = 14102266532203251623ULL;
unsigned char var_10 = (unsigned char)3;
signed char var_11 = (signed char)60;
signed char var_13 = (signed char)118;
unsigned long long int var_17 = 1598701508315022625ULL;
int zero = 0;
long long int var_19 = 5599193591053273967LL;
signed char var_20 = (signed char)-36;
unsigned int var_21 = 902806785U;
signed char var_22 = (signed char)63;
long long int arr_0 [25] ;
unsigned short arr_1 [25] ;
unsigned int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 6077115520223402087LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)27246;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 4213826225U;
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
