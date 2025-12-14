#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)73;
unsigned short var_8 = (unsigned short)64291;
long long int var_10 = -2945972977323841688LL;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)200;
unsigned short var_14 = (unsigned short)60533;
int var_15 = 2003103847;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-103;
unsigned char var_21 = (unsigned char)202;
unsigned int var_22 = 426987529U;
signed char var_23 = (signed char)-114;
unsigned int var_24 = 3061514501U;
unsigned char var_25 = (unsigned char)39;
unsigned long long int arr_0 [24] ;
long long int arr_2 [24] ;
unsigned long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 13739277254831664789ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 8692592939072314690LL : -8118575949373322638LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7332541378462281673ULL : 5079856605516432194ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
