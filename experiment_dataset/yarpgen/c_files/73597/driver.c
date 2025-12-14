#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)229;
unsigned char var_7 = (unsigned char)35;
unsigned char var_9 = (unsigned char)22;
unsigned int var_10 = 2678656226U;
short var_13 = (short)30145;
long long int var_17 = -4482665558998368831LL;
int zero = 0;
signed char var_18 = (signed char)-23;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)32253;
short var_21 = (short)-25540;
unsigned char var_22 = (unsigned char)58;
short var_23 = (short)-29704;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 11608162839268143145ULL;
unsigned char var_26 = (unsigned char)219;
signed char arr_2 [24] ;
unsigned int arr_3 [24] ;
signed char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 2983389836U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)105;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
