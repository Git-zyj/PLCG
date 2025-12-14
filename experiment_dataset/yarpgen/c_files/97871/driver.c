#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41269;
unsigned short var_1 = (unsigned short)33050;
unsigned long long int var_2 = 11863819829374234300ULL;
unsigned long long int var_3 = 1701923969925601177ULL;
unsigned long long int var_4 = 15967333897708297279ULL;
unsigned long long int var_5 = 8663665058085283066ULL;
unsigned short var_6 = (unsigned short)65188;
unsigned short var_8 = (unsigned short)15476;
unsigned long long int var_9 = 7252118925103500924ULL;
unsigned short var_10 = (unsigned short)8844;
unsigned short var_11 = (unsigned short)23876;
unsigned long long int var_12 = 7317132712298455186ULL;
int zero = 0;
unsigned long long int var_13 = 11437983887372554496ULL;
unsigned long long int var_14 = 14882281365748986459ULL;
unsigned short var_15 = (unsigned short)11899;
unsigned short var_16 = (unsigned short)40569;
unsigned long long int var_17 = 8819414857250486691ULL;
unsigned long long int var_18 = 15525787008252106858ULL;
unsigned long long int var_19 = 6442694498319557860ULL;
unsigned long long int var_20 = 8683513748992899171ULL;
unsigned short var_21 = (unsigned short)23028;
unsigned short var_22 = (unsigned short)9466;
unsigned short var_23 = (unsigned short)23808;
unsigned short var_24 = (unsigned short)16382;
unsigned short var_25 = (unsigned short)28482;
unsigned short var_26 = (unsigned short)26063;
unsigned long long int arr_0 [15] [15] ;
unsigned long long int arr_8 [14] [14] ;
unsigned short arr_9 [14] [14] ;
unsigned short arr_13 [14] [14] [14] ;
unsigned long long int arr_16 [14] [14] [14] [14] ;
unsigned long long int arr_19 [12] ;
unsigned long long int arr_2 [15] [15] ;
unsigned short arr_7 [15] [15] ;
unsigned long long int arr_17 [14] ;
unsigned long long int arr_18 [14] [14] ;
unsigned long long int arr_22 [12] ;
unsigned short arr_23 [12] [12] ;
unsigned short arr_34 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 11016342196592563060ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 13117588895424365001ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)50889;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)34678;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 127180457046913977ULL : 14454225876776269357ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 3272404851707747228ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 3300517124843210152ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)52002;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 10943896347217170321ULL : 5164264998713886036ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = 10548796627931292584ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = 1350394947573777812ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)64806;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_34 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)17915 : (unsigned short)17693;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
