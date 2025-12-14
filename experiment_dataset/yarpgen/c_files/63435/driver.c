#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58100;
unsigned char var_3 = (unsigned char)22;
long long int var_6 = -5574472730673708425LL;
unsigned long long int var_7 = 9889351374349203899ULL;
long long int var_8 = 3240985358182036231LL;
unsigned long long int var_9 = 13198960741003909512ULL;
signed char var_12 = (signed char)-51;
short var_13 = (short)11908;
unsigned int var_15 = 886501220U;
signed char var_16 = (signed char)-114;
int zero = 0;
unsigned long long int var_17 = 17165100028896690848ULL;
unsigned long long int var_18 = 6998077739938552685ULL;
long long int var_19 = -5968712119762138909LL;
unsigned long long int var_20 = 9400400302293606056ULL;
unsigned long long int var_21 = 9780409508919143781ULL;
unsigned long long int var_22 = 4287392432652611451ULL;
long long int arr_3 [16] ;
short arr_4 [16] [16] ;
short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -497140356272245793LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-7750;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)17381;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
