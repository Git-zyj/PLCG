#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46033;
long long int var_1 = 8564040852987181682LL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 12781286188268734440ULL;
unsigned int var_6 = 3140535786U;
unsigned int var_7 = 3459543890U;
long long int var_8 = 4379675799384960549LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = 6633901317133014618LL;
unsigned int var_15 = 2238747314U;
unsigned int var_16 = 3488442685U;
int zero = 0;
int var_18 = -978199497;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 7008265313973645977ULL;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 11154130293561133103ULL;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)47018;
short var_27 = (short)1016;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 12071870835929451841ULL;
unsigned short var_30 = (unsigned short)59799;
_Bool var_31 = (_Bool)0;
unsigned short var_32 = (unsigned short)65174;
short var_33 = (short)-16516;
_Bool var_34 = (_Bool)1;
unsigned short var_35 = (unsigned short)25;
long long int var_36 = 6018428259882601745LL;
long long int var_37 = -7978134709910999392LL;
signed char var_38 = (signed char)69;
unsigned int var_39 = 3253454333U;
short var_40 = (short)11821;
unsigned int var_41 = 2780919763U;
_Bool var_42 = (_Bool)0;
long long int var_43 = -678303003323975931LL;
unsigned long long int var_44 = 7145509341694943061ULL;
long long int var_45 = 3655210095611099784LL;
_Bool var_46 = (_Bool)0;
long long int var_47 = 6369188220133188108LL;
unsigned short var_48 = (unsigned short)22665;
long long int var_49 = -6891072762030408929LL;
long long int var_50 = -22525023173231673LL;
long long int var_51 = -3781416756095451190LL;
int var_52 = 203860752;
signed char var_53 = (signed char)-62;
unsigned long long int var_54 = 2399132279705934121ULL;
unsigned char var_55 = (unsigned char)204;
_Bool var_56 = (_Bool)0;
unsigned short var_57 = (unsigned short)22594;
unsigned int var_58 = 2985555898U;
int var_59 = 1257431256;
unsigned int var_60 = 1856347156U;
unsigned short var_61 = (unsigned short)51155;
long long int var_62 = -8957972639535451964LL;
_Bool var_63 = (_Bool)1;
_Bool var_64 = (_Bool)1;
_Bool var_65 = (_Bool)1;
int var_66 = 660115251;
unsigned long long int var_67 = 10701944031552356153ULL;
_Bool var_68 = (_Bool)1;
signed char var_69 = (signed char)80;
signed char var_70 = (signed char)27;
_Bool var_71 = (_Bool)0;
unsigned long long int var_72 = 13623313376252768947ULL;
_Bool var_73 = (_Bool)1;
long long int var_74 = 6481113030491008045LL;
unsigned short var_75 = (unsigned short)8734;
unsigned char var_76 = (unsigned char)93;
long long int var_77 = 4901858429725435561LL;
_Bool var_78 = (_Bool)0;
unsigned long long int var_79 = 7500720415944995967ULL;
unsigned short var_80 = (unsigned short)18322;
_Bool var_81 = (_Bool)0;
long long int var_82 = 5249416111405925222LL;
_Bool var_83 = (_Bool)0;
unsigned char var_84 = (unsigned char)30;
_Bool var_85 = (_Bool)1;
long long int var_86 = -3279553103289106528LL;
_Bool var_87 = (_Bool)0;
_Bool var_88 = (_Bool)0;
long long int arr_0 [14] ;
unsigned int arr_2 [14] ;
unsigned int arr_4 [14] [14] [14] ;
unsigned int arr_6 [14] [14] ;
signed char arr_7 [21] ;
unsigned int arr_8 [21] ;
unsigned short arr_9 [21] [21] ;
signed char arr_10 [10] [10] ;
unsigned int arr_11 [10] [10] ;
signed char arr_12 [10] ;
short arr_13 [10] [10] ;
long long int arr_14 [10] ;
long long int arr_15 [10] [10] ;
_Bool arr_19 [10] [10] ;
long long int arr_20 [10] [10] [10] ;
unsigned int arr_23 [10] [10] ;
int arr_25 [10] [10] [10] [10] [10] ;
long long int arr_26 [10] [10] [10] [10] ;
long long int arr_27 [10] ;
long long int arr_29 [10] [10] [10] [10] [10] [10] ;
long long int arr_32 [10] [10] [10] [10] [10] ;
short arr_33 [10] [10] [10] ;
long long int arr_34 [10] [10] [10] [10] [10] [10] ;
long long int arr_35 [10] [10] [10] [10] [10] ;
long long int arr_39 [10] [10] [10] [10] ;
long long int arr_40 [10] [10] [10] [10] ;
int arr_44 [10] [10] [10] ;
unsigned short arr_49 [10] [10] ;
int arr_54 [10] [10] [10] [10] [10] [10] ;
unsigned int arr_55 [10] ;
_Bool arr_58 [10] [10] [10] ;
unsigned short arr_75 [10] [10] [10] [10] [10] [10] ;
_Bool arr_81 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -8643262425610211211LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 575281230U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3359997077U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 3909315810U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 1865813194U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)3489;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = 2130187206U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-26501;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 8875409602588051015LL : -276510346464258869LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? -4316599458398670649LL : 7862366003818230147LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 1169411134479946500LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_23 [i_0] [i_1] = 587643248U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -1072340159 : 635886900;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 806852855084565535LL : 5865908877201073193LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = 1398500142935583192LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 100709407803859040LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = -4852123016875973771LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)12949 : (short)-21766;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? -1662744046039855539LL : -8918520708979798301LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = -787256400976909032LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = 4349932252281883983LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = 4245796275351246197LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1490058418 : -2122121761;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_49 [i_0] [i_1] = (unsigned short)16673;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -639267786 : -1951608087;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_55 [i_0] = 4184983671U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_75 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)62308;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_81 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
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
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    hash(&seed, var_88);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
