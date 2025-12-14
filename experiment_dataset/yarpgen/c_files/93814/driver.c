#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18861;
int var_1 = 123764948;
unsigned char var_2 = (unsigned char)116;
unsigned int var_3 = 2446871080U;
unsigned short var_4 = (unsigned short)45259;
short var_5 = (short)-28401;
unsigned int var_7 = 2069377644U;
int var_8 = 1728774056;
unsigned char var_9 = (unsigned char)99;
long long int var_10 = 7441773322370609463LL;
int zero = 0;
unsigned short var_11 = (unsigned short)18341;
unsigned long long int var_12 = 1213355198533353843ULL;
unsigned short var_13 = (unsigned short)8934;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1361786069992368492LL;
long long int var_17 = 9010763058190029796LL;
signed char var_18 = (signed char)-66;
signed char var_19 = (signed char)22;
unsigned int var_20 = 2558529458U;
int var_21 = -322451683;
long long int var_22 = -5788968679897119473LL;
int var_23 = -1113145298;
signed char var_24 = (signed char)-106;
unsigned char var_25 = (unsigned char)219;
unsigned long long int var_26 = 10234609167821952691ULL;
unsigned int var_27 = 139773592U;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)102;
_Bool var_30 = (_Bool)0;
unsigned long long int arr_6 [24] [24] [24] ;
unsigned long long int arr_14 [24] [24] [24] [24] ;
unsigned long long int arr_22 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 17865349526529214147ULL : 13815637276242858901ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 7263955322759640627ULL : 15256926095625373266ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 12197732121086846422ULL : 16493692641897570616ULL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
