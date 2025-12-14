#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32698;
signed char var_2 = (signed char)(-127 - 1);
unsigned short var_4 = (unsigned short)52587;
unsigned short var_7 = (unsigned short)59340;
unsigned long long int var_9 = 14318422904126556531ULL;
int zero = 0;
int var_11 = 1788914705;
int var_12 = 9756388;
unsigned short var_13 = (unsigned short)7808;
unsigned short var_14 = (unsigned short)48751;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)112;
unsigned long long int var_17 = 13154582785124812740ULL;
short var_18 = (short)13396;
signed char var_19 = (signed char)32;
unsigned int var_20 = 2117652828U;
signed char var_21 = (signed char)-89;
unsigned long long int var_22 = 13734373305961087004ULL;
signed char var_23 = (signed char)114;
unsigned long long int var_24 = 11147726909926682328ULL;
unsigned long long int arr_0 [18] [18] ;
unsigned long long int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 2187890923084493028ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 8428265257611626161ULL : 4729168729393893541ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
