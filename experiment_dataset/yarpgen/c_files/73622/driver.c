#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2581676735U;
signed char var_1 = (signed char)34;
signed char var_2 = (signed char)-77;
signed char var_4 = (signed char)-39;
long long int var_6 = -1141148508814315023LL;
signed char var_12 = (signed char)-114;
int var_13 = 1880294260;
long long int var_15 = -5086522270753154014LL;
int zero = 0;
unsigned short var_17 = (unsigned short)45425;
unsigned char var_18 = (unsigned char)19;
long long int var_19 = 5433869694799915477LL;
int arr_0 [25] ;
unsigned long long int arr_2 [25] ;
short arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 616790489;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 12353317810301604777ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)6332;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
