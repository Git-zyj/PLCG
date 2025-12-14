#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
signed char var_1 = (signed char)-33;
long long int var_2 = -1982912823433152156LL;
unsigned short var_3 = (unsigned short)15067;
unsigned char var_4 = (unsigned char)39;
_Bool var_7 = (_Bool)1;
long long int var_8 = -8169992206643794426LL;
long long int var_9 = -173251142323325494LL;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-24947;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)176;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)5;
unsigned char var_18 = (unsigned char)187;
unsigned int var_19 = 2798484896U;
unsigned long long int var_20 = 7878847759418821753ULL;
_Bool var_21 = (_Bool)0;
int var_22 = -2116611306;
unsigned char var_23 = (unsigned char)155;
short var_24 = (short)7892;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 8184417762361606092ULL;
signed char var_27 = (signed char)-112;
unsigned int var_28 = 2283051770U;
short var_29 = (short)-3303;
signed char var_30 = (signed char)-25;
long long int var_31 = 5825731391850450039LL;
unsigned long long int var_32 = 15086186452600220141ULL;
long long int var_33 = -377344980607961131LL;
signed char var_34 = (signed char)26;
unsigned int var_35 = 4181668832U;
unsigned char var_36 = (unsigned char)67;
int var_37 = 1943434832;
short var_38 = (short)4427;
unsigned long long int var_39 = 6101092159539784069ULL;
unsigned short var_40 = (unsigned short)35064;
unsigned short var_41 = (unsigned short)56752;
unsigned long long int var_42 = 14525909016597347302ULL;
unsigned long long int var_43 = 4206039532547394578ULL;
unsigned int var_44 = 1777188271U;
_Bool var_45 = (_Bool)1;
int var_46 = 2101799473;
_Bool var_47 = (_Bool)0;
_Bool var_48 = (_Bool)0;
_Bool var_49 = (_Bool)1;
short var_50 = (short)-5689;
unsigned short var_51 = (unsigned short)44311;
int var_52 = -162757696;
long long int var_53 = 111308623384235263LL;
unsigned char var_54 = (unsigned char)67;
signed char var_55 = (signed char)53;
unsigned long long int var_56 = 7256384828785689336ULL;
unsigned short var_57 = (unsigned short)64974;
unsigned char var_58 = (unsigned char)112;
unsigned short var_59 = (unsigned short)41696;
signed char var_60 = (signed char)-94;
_Bool arr_0 [19] [19] ;
long long int arr_1 [19] [19] ;
int arr_2 [19] [19] ;
short arr_3 [19] [19] ;
long long int arr_4 [19] ;
_Bool arr_5 [19] ;
long long int arr_9 [19] [19] [19] ;
unsigned long long int arr_10 [19] [19] [19] ;
int arr_11 [19] [19] ;
_Bool arr_12 [19] [19] ;
short arr_14 [19] [19] [19] [19] ;
unsigned char arr_15 [19] ;
unsigned short arr_16 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_17 [19] [19] [19] [19] ;
unsigned int arr_19 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_20 [19] [19] [19] [19] [19] ;
signed char arr_22 [19] [19] [19] [19] [19] [19] ;
int arr_25 [19] ;
unsigned short arr_26 [19] ;
unsigned int arr_28 [19] [19] ;
signed char arr_35 [15] [15] [15] ;
unsigned char arr_37 [15] [15] [15] [15] ;
signed char arr_43 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -161622700477360888LL : -7973171735160138279LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -94791576 : -149073561;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)15292;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -8318067643446372414LL : 8413657895368942896LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2764377825393695625LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 343743402305546764ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -870621729 : -775796484;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)-8264;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)14936;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)43482;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3370126239U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = 17222773071719400208ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (signed char)-55 : (signed char)60;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = -1902427414;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (unsigned short)15930;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_28 [i_0] [i_1] = 2190885068U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_43 [i_0] = (signed char)-41;
}

void checksum() {
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
