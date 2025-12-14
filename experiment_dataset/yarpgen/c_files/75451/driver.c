#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7456592874906450697LL;
long long int var_3 = 6504681488933287577LL;
long long int var_10 = -1394187989521295729LL;
unsigned short var_11 = (unsigned short)32700;
int var_13 = -1442204689;
int zero = 0;
signed char var_18 = (signed char)-58;
unsigned short var_19 = (unsigned short)30867;
int var_20 = 39485649;
unsigned int var_21 = 3649742451U;
int arr_0 [20] [20] ;
unsigned char arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 990253968 : 924602014;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)207;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
