#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5931196966640794297ULL;
unsigned short var_2 = (unsigned short)14604;
short var_4 = (short)-5066;
unsigned long long int var_5 = 15818180085596648108ULL;
unsigned long long int var_6 = 14478469620686781736ULL;
int var_7 = 1840888515;
short var_8 = (short)-31145;
signed char var_9 = (signed char)-117;
unsigned short var_12 = (unsigned short)26263;
int zero = 0;
unsigned long long int var_13 = 2595498061182371573ULL;
unsigned long long int var_14 = 14066421853056676372ULL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-54;
unsigned long long int var_17 = 10025785856967820795ULL;
unsigned short var_18 = (unsigned short)29946;
signed char var_19 = (signed char)-36;
unsigned long long int var_20 = 15911675462019174673ULL;
unsigned short var_21 = (unsigned short)24225;
signed char var_22 = (signed char)-91;
short arr_0 [21] [21] ;
unsigned int arr_4 [21] [21] [21] [21] ;
unsigned short arr_7 [21] [21] [21] ;
int arr_8 [21] [21] ;
unsigned short arr_9 [21] [21] [21] [21] ;
long long int arr_11 [21] [21] [21] [21] [21] ;
unsigned short arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-9327;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 4115223319U : 3168186380U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)5346 : (unsigned short)64816;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = -1216585176;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)52142;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -6305849831298939547LL : 7894595339246137604LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10472 : (unsigned short)18118;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
