#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6435778795733628283ULL;
long long int var_1 = 648785183456260656LL;
unsigned long long int var_2 = 9580977782347049351ULL;
unsigned char var_3 = (unsigned char)160;
unsigned char var_4 = (unsigned char)191;
unsigned char var_5 = (unsigned char)182;
unsigned short var_6 = (unsigned short)4321;
long long int var_7 = 567711878562222154LL;
unsigned short var_8 = (unsigned short)49641;
int var_9 = -1245439387;
unsigned char var_10 = (unsigned char)46;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)148;
unsigned long long int var_14 = 14327733511855687168ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)14835;
unsigned short var_17 = (unsigned short)37264;
long long int var_18 = -6164300141633153225LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)7895;
signed char var_21 = (signed char)36;
int var_22 = 1218168375;
unsigned char var_23 = (unsigned char)27;
int var_24 = 525313864;
unsigned long long int var_25 = 13007019880955076629ULL;
unsigned char var_26 = (unsigned char)175;
int arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 1781819726;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
