#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 749601996U;
int var_1 = -2040720705;
short var_2 = (short)-9136;
signed char var_3 = (signed char)-120;
short var_4 = (short)-11481;
int var_5 = -849076188;
unsigned int var_6 = 546311038U;
int var_7 = 105130452;
long long int var_8 = 3042339550058773531LL;
short var_9 = (short)-29798;
signed char var_10 = (signed char)127;
short var_11 = (short)-23761;
int zero = 0;
unsigned short var_12 = (unsigned short)36223;
unsigned short var_13 = (unsigned short)65294;
short var_14 = (short)-30881;
short var_15 = (short)-3586;
long long int var_16 = 4982258490630245094LL;
unsigned short var_17 = (unsigned short)18821;
int var_18 = 564256661;
unsigned int var_19 = 3810034567U;
unsigned int var_20 = 1859728347U;
unsigned long long int var_21 = 5185314725302489252ULL;
unsigned long long int var_22 = 6185852368479814829ULL;
short var_23 = (short)-24351;
unsigned short var_24 = (unsigned short)51453;
unsigned int var_25 = 2287894613U;
unsigned int var_26 = 2526968974U;
long long int var_27 = 5348729090225426532LL;
long long int var_28 = -7376658663158093856LL;
unsigned int var_29 = 853341698U;
unsigned int var_30 = 48596161U;
_Bool var_31 = (_Bool)0;
int var_32 = 937263539;
unsigned long long int var_33 = 2947771198068091746ULL;
signed char var_34 = (signed char)100;
unsigned short var_35 = (unsigned short)8490;
short var_36 = (short)-24888;
unsigned long long int arr_0 [22] ;
unsigned short arr_1 [22] ;
unsigned long long int arr_3 [17] ;
unsigned int arr_4 [17] [17] ;
unsigned long long int arr_5 [17] [17] ;
unsigned int arr_6 [17] [17] [17] ;
unsigned short arr_7 [17] [17] [17] [17] ;
int arr_8 [17] [17] [17] [17] ;
short arr_9 [17] ;
short arr_10 [17] ;
unsigned int arr_12 [17] [17] [17] ;
short arr_13 [17] [17] [17] ;
unsigned int arr_14 [17] [17] [17] ;
unsigned int arr_15 [17] [17] [17] ;
unsigned short arr_17 [17] [17] [17] [17] ;
signed char arr_23 [17] [17] [17] [17] ;
int arr_24 [17] [17] [17] ;
unsigned short arr_2 [22] ;
signed char arr_20 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 4654429127016504808ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)37840;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 18116238311400904123ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 2653145299U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 5594506020972226014ULL : 5483409379146219066ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2691541146U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)18242 : (unsigned short)59656;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -605469686 : -1856464677;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (short)5112;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (short)-30312;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1737245262U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)21097;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 3004755695U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2871543240U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)10787;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 415060870;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)63419;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)118;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
