#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10702177877718261831ULL;
long long int var_1 = 1220556301115935062LL;
unsigned long long int var_2 = 17034129531300345797ULL;
long long int var_6 = 4185129812254469111LL;
unsigned long long int var_7 = 6248466269759268329ULL;
unsigned long long int var_8 = 109356932169911191ULL;
unsigned long long int var_9 = 10905786684397693967ULL;
unsigned long long int var_11 = 64610770452017609ULL;
long long int var_13 = -6791189244125306359LL;
unsigned long long int var_14 = 1407216082281681424ULL;
unsigned long long int var_15 = 10481508139831174125ULL;
long long int var_16 = 4820567749175175143LL;
int zero = 0;
long long int var_17 = -3483387668781486844LL;
unsigned long long int var_18 = 12624998945757947541ULL;
unsigned long long int var_19 = 1291718987006792407ULL;
unsigned long long int var_20 = 13286814340899775177ULL;
unsigned long long int var_21 = 663770148547252503ULL;
long long int var_22 = 6925027268333955203LL;
unsigned long long int var_23 = 6668717173985828181ULL;
unsigned long long int var_24 = 6825627115978831364ULL;
long long int var_25 = -1024553515233756319LL;
unsigned long long int var_26 = 2583074437111337935ULL;
unsigned long long int var_27 = 11985937114911350407ULL;
unsigned long long int var_28 = 14452119087297961418ULL;
unsigned long long int var_29 = 7019557053303390627ULL;
unsigned long long int var_30 = 3543536648587717007ULL;
unsigned long long int var_31 = 15052340748978647687ULL;
unsigned long long int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned long long int arr_3 [24] [24] [24] ;
unsigned long long int arr_4 [24] [24] [24] [24] ;
long long int arr_5 [24] [24] [24] [24] ;
unsigned long long int arr_6 [24] [24] [24] [24] ;
unsigned long long int arr_7 [24] [24] [24] [24] ;
unsigned long long int arr_8 [24] ;
long long int arr_9 [24] ;
long long int arr_10 [24] ;
long long int arr_11 [24] [24] ;
unsigned long long int arr_18 [24] [24] [24] [24] ;
unsigned long long int arr_24 [17] ;
unsigned long long int arr_31 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_12 [24] ;
unsigned long long int arr_13 [24] [24] ;
unsigned long long int arr_19 [24] [24] ;
long long int arr_32 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 17066883706711659804ULL : 12953554354504560361ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 13535431402944635855ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 14656251890495127167ULL : 11305643772581737863ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 15751010366601094090ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 3061417098933889169LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 10455962551677700892ULL : 7130470904504107236ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 14748174995949534908ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 16721164499535992733ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 2648226261277635516LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -5224114237523208776LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = -4093176166912930400LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 12363612322135715036ULL : 10107257127586980173ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = 9547909765380489010ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 345020716655108029ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 1511674203959585401ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = 15168851539639723349ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 1972834462953372830ULL : 5937725655445112872ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_32 [i_0] = -4196909257046985666LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
