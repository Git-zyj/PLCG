#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6771949324483725067ULL;
unsigned long long int var_1 = 13237649639522949267ULL;
unsigned long long int var_2 = 13571885094071994440ULL;
unsigned long long int var_3 = 4567888897014327045ULL;
unsigned long long int var_4 = 10009844899543818442ULL;
unsigned long long int var_5 = 7780023194658677606ULL;
unsigned long long int var_6 = 10064287713897675305ULL;
unsigned long long int var_7 = 17640577972215409252ULL;
unsigned long long int var_8 = 408789969278138047ULL;
unsigned long long int var_9 = 18304120273515531854ULL;
int zero = 0;
unsigned long long int var_10 = 14949574596452354539ULL;
unsigned long long int var_11 = 11577621774791677312ULL;
unsigned long long int var_12 = 11548108646202910661ULL;
unsigned long long int var_13 = 6005024314267874747ULL;
unsigned long long int var_14 = 5950925716679780639ULL;
unsigned long long int var_15 = 8524432308831300701ULL;
unsigned long long int var_16 = 6396682312534241455ULL;
unsigned long long int var_17 = 709656335910863518ULL;
unsigned long long int var_18 = 15495174418539923023ULL;
unsigned long long int var_19 = 1048568564438811894ULL;
unsigned long long int var_20 = 4309746760790347158ULL;
unsigned long long int var_21 = 1198066441732090975ULL;
unsigned long long int var_22 = 7324000747283620528ULL;
unsigned long long int var_23 = 2306829741032255002ULL;
unsigned long long int var_24 = 572059585680224848ULL;
unsigned long long int var_25 = 10410787068634480102ULL;
unsigned long long int var_26 = 14316437410777331099ULL;
unsigned long long int var_27 = 7631751595181134175ULL;
unsigned long long int arr_0 [15] ;
unsigned long long int arr_3 [14] [14] ;
unsigned long long int arr_4 [14] [14] ;
unsigned long long int arr_5 [14] [14] ;
unsigned long long int arr_7 [14] [14] [14] ;
unsigned long long int arr_8 [14] [14] ;
unsigned long long int arr_9 [14] [14] [14] ;
unsigned long long int arr_11 [14] [14] ;
unsigned long long int arr_12 [14] [14] [14] [14] ;
unsigned long long int arr_13 [14] [14] [14] ;
unsigned long long int arr_15 [14] [14] [14] [14] [14] ;
unsigned long long int arr_17 [14] ;
unsigned long long int arr_18 [14] ;
unsigned long long int arr_22 [14] [14] ;
unsigned long long int arr_25 [14] ;
unsigned long long int arr_30 [14] ;
unsigned long long int arr_16 [14] [14] [14] [14] [14] ;
unsigned long long int arr_19 [14] ;
unsigned long long int arr_20 [14] [14] ;
unsigned long long int arr_21 [14] [14] ;
unsigned long long int arr_31 [14] ;
unsigned long long int arr_34 [14] [14] ;
unsigned long long int arr_37 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 6599347737860358468ULL : 6964117874501818398ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 15546029436754638074ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 3565481912032831403ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 13654249737867278368ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 4007829563399621471ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 9444257847479591983ULL : 14521935532025079743ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11153561189110752827ULL : 4927189636916454201ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 8867386888611112377ULL : 10838869814059866684ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 12450971650405421005ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 704182033964348892ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 7995365787110496005ULL : 16825826053302966606ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = 12247208343797895842ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = 1364636716467620790ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_22 [i_0] [i_1] = 8625816695971927333ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = 5378209429420763012ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_30 [i_0] = 12647372876677634555ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 6755890362017220617ULL : 16692093565004365874ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = 16122302502666699845ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_20 [i_0] [i_1] = 8916025727835336320ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = 2707307847536571ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 17305514253467662959ULL : 16418659061782359668ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_34 [i_0] [i_1] = 17268116841746366691ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 14763065478794249245ULL;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
