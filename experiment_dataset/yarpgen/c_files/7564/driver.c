#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5478;
unsigned long long int var_1 = 17039704882094192718ULL;
unsigned short var_3 = (unsigned short)15320;
unsigned long long int var_5 = 13015357837174215459ULL;
unsigned char var_6 = (unsigned char)164;
short var_8 = (short)18952;
short var_10 = (short)-26214;
unsigned short var_12 = (unsigned short)57515;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_17 = 8514934825900963678LL;
long long int var_18 = -1077144549036023119LL;
unsigned long long int var_19 = 4016504972603919949ULL;
unsigned short var_20 = (unsigned short)46594;
long long int var_21 = -5172620717949458625LL;
unsigned char var_22 = (unsigned char)109;
short arr_2 [19] [19] ;
unsigned long long int arr_6 [19] ;
short arr_7 [19] ;
short arr_8 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)23785;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 17282515177963246860ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-5689 : (short)-27034;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)17635 : (short)-10403;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
