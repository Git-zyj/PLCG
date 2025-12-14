#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3490611433982752515ULL;
long long int var_1 = 8799257386149236686LL;
unsigned int var_2 = 2794179917U;
unsigned int var_3 = 361730396U;
unsigned short var_4 = (unsigned short)9533;
signed char var_5 = (signed char)18;
unsigned char var_6 = (unsigned char)193;
_Bool var_7 = (_Bool)0;
short var_8 = (short)29686;
short var_9 = (short)16009;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 9381370778254935306ULL;
unsigned long long int var_12 = 3809102352826403139ULL;
unsigned short var_13 = (unsigned short)41072;
unsigned long long int var_14 = 10858860321507542247ULL;
unsigned int var_15 = 503132479U;
short var_16 = (short)29416;
long long int var_17 = -7114779952411352114LL;
unsigned short var_18 = (unsigned short)60768;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)23079;
signed char var_22 = (signed char)78;
unsigned int var_23 = 158116837U;
short var_24 = (short)7062;
signed char var_25 = (signed char)-45;
unsigned int var_26 = 386858994U;
unsigned char var_27 = (unsigned char)209;
short var_28 = (short)18251;
unsigned char var_29 = (unsigned char)249;
unsigned short var_30 = (unsigned short)8097;
unsigned int var_31 = 3761342608U;
unsigned int var_32 = 2764912046U;
unsigned long long int var_33 = 7405595538420116487ULL;
unsigned long long int var_34 = 11269650769723767429ULL;
short var_35 = (short)32023;
signed char var_36 = (signed char)113;
short var_37 = (short)14102;
unsigned short var_38 = (unsigned short)29041;
signed char var_39 = (signed char)-82;
unsigned int var_40 = 1830156471U;
unsigned char var_41 = (unsigned char)103;
unsigned long long int var_42 = 1171452402167296548ULL;
long long int var_43 = -1349863112263056328LL;
unsigned int var_44 = 2477961393U;
unsigned short var_45 = (unsigned short)57658;
signed char var_46 = (signed char)57;
unsigned char var_47 = (unsigned char)120;
short var_48 = (short)28297;
long long int var_49 = -5751496610798855859LL;
signed char var_50 = (signed char)114;
unsigned char var_51 = (unsigned char)90;
long long int var_52 = -2245769968129286928LL;
unsigned int var_53 = 1472719120U;
signed char var_54 = (signed char)20;
short var_55 = (short)12068;
short var_56 = (short)-9109;
unsigned char var_57 = (unsigned char)207;
unsigned short var_58 = (unsigned short)32568;
short var_59 = (short)-6556;
unsigned char var_60 = (unsigned char)234;
unsigned int var_61 = 678813620U;
short var_62 = (short)613;
signed char var_63 = (signed char)22;
unsigned int var_64 = 3933169751U;
unsigned int var_65 = 2257249924U;
unsigned long long int var_66 = 18096442976515810249ULL;
unsigned long long int var_67 = 8531909951342269717ULL;
signed char var_68 = (signed char)41;
unsigned long long int arr_1 [12] [12] ;
unsigned int arr_3 [12] ;
_Bool arr_4 [12] ;
unsigned char arr_5 [12] ;
_Bool arr_7 [12] ;
long long int arr_10 [12] [12] [12] [12] [12] [12] ;
unsigned char arr_11 [12] [12] [12] [12] ;
long long int arr_18 [21] [21] ;
unsigned short arr_19 [21] ;
short arr_20 [21] ;
signed char arr_21 [21] ;
signed char arr_23 [21] [21] ;
_Bool arr_24 [21] ;
unsigned long long int arr_27 [21] [21] [21] ;
unsigned long long int arr_28 [21] [21] [21] [21] ;
long long int arr_29 [21] [21] [21] [21] ;
short arr_30 [21] [21] [21] [21] ;
unsigned long long int arr_31 [21] [21] [21] [21] ;
short arr_32 [21] ;
unsigned long long int arr_33 [21] ;
signed char arr_34 [21] [21] [21] ;
signed char arr_35 [21] [21] [21] [21] ;
unsigned char arr_38 [21] [21] [21] [21] ;
short arr_40 [21] [21] [21] [21] [21] [21] ;
short arr_41 [21] [21] [21] [21] [21] ;
unsigned long long int arr_44 [21] [21] [21] ;
unsigned short arr_46 [21] [21] [21] ;
long long int arr_50 [21] [21] ;
unsigned long long int arr_52 [21] [21] [21] [21] ;
signed char arr_53 [21] ;
unsigned char arr_62 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_63 [21] [21] [21] [21] [21] ;
_Bool arr_64 [21] [21] ;
unsigned int arr_68 [21] [21] [21] ;
_Bool arr_71 [21] ;
unsigned long long int arr_77 [21] [21] [21] [21] ;
_Bool arr_90 [15] [15] [15] [15] ;
unsigned short arr_94 [15] [15] [15] [15] [15] ;
short arr_108 [15] [15] [15] ;
unsigned char arr_13 [12] [12] [12] ;
unsigned int arr_17 [11] ;
signed char arr_25 [21] [21] [21] ;
_Bool arr_26 [21] [21] [21] ;
long long int arr_45 [21] [21] [21] [21] ;
unsigned char arr_55 [21] [21] [21] [21] ;
unsigned int arr_56 [21] [21] [21] [21] [21] [21] ;
unsigned long long int arr_57 [21] [21] [21] ;
short arr_61 [21] [21] [21] [21] ;
_Bool arr_67 [21] [21] [21] [21] ;
long long int arr_70 [21] [21] [21] [21] [21] ;
short arr_76 [21] [21] [21] ;
short arr_112 [15] [15] [15] [15] [15] ;
_Bool arr_115 [15] [15] [15] [15] ;
unsigned long long int arr_116 [15] [15] ;
unsigned short arr_117 [15] ;
unsigned short arr_127 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 2430296951744896654ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 2796638606U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -4516254423369266141LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)71 : (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = 3752983034020709260LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (unsigned short)13326;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (short)-27026;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 4785851852131597181ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 7784937796424686694ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 5761284773026570937LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-28607 : (short)26137;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 7235110390990772527ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = (short)-19565;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_33 [i_0] = 5216405680486421762ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)27752;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-7984;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 12958574305622894967ULL : 17912987681807589310ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (unsigned short)64340;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_50 [i_0] [i_1] = -210215937897857993LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 7141570175905492405ULL : 16902591400939049570ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_53 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)10860 : (unsigned short)4714;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_64 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = 3007927135U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_71 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_77 [i_0] [i_1] [i_2] [i_3] = 9209319135928701594ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_90 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_94 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)37939;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_108 [i_0] [i_1] [i_2] = (short)-3665;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)139 : (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 800377073U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1169747046077822650LL : -4354587727707418088LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)93 : (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 3188779304U : 341513232U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 5661117817948581138ULL : 7051473797162562738ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-15943 : (short)11615;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_70 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -1246073736016733764LL : -2564089901667103868LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_76 [i_0] [i_1] [i_2] = (short)26861;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_112 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)-15148 : (short)-25552;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_115 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_116 [i_0] [i_1] = (i_0 % 2 == 0) ? 5076167093224821036ULL : 5010261118423790317ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_117 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63394 : (unsigned short)1837;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_127 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)29010 : (unsigned short)33850;
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
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_55 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_57 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_67 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_70 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_76 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_112 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_115 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_116 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_117 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_127 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
