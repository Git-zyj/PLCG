#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1469787543;
unsigned int var_1 = 2060074582U;
unsigned long long int var_3 = 630597644009599253ULL;
unsigned int var_4 = 2037050096U;
unsigned long long int var_6 = 3497806285131444059ULL;
long long int var_7 = 7530686589280887777LL;
unsigned long long int var_8 = 14694084813115687450ULL;
signed char var_9 = (signed char)-62;
long long int var_11 = -5414731230002728052LL;
long long int var_12 = -2923843081494187663LL;
unsigned int var_13 = 3194793587U;
long long int var_14 = -5352300952353339547LL;
int var_16 = -116757966;
int zero = 0;
unsigned int var_17 = 3364427431U;
short var_18 = (short)-26866;
int var_19 = 683618144;
long long int var_20 = -8901240973439719975LL;
unsigned short var_21 = (unsigned short)53242;
unsigned int var_22 = 2387355302U;
unsigned int arr_0 [17] [17] ;
unsigned long long int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 2220670656U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 16421788050398211594ULL;
}

void checksum() {
    hash(&seed, var_17);
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
