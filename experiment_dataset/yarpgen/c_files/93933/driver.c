#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2742464301614187069ULL;
unsigned long long int var_3 = 16828226761489305916ULL;
unsigned long long int var_6 = 3002932311310399955ULL;
unsigned long long int var_7 = 9045884336478393294ULL;
unsigned long long int var_10 = 5208201652175931667ULL;
int zero = 0;
unsigned long long int var_12 = 11201528393875138734ULL;
unsigned long long int var_13 = 4647863613898179020ULL;
unsigned long long int var_14 = 724239664026556806ULL;
unsigned long long int var_15 = 12029996442136045201ULL;
unsigned long long int var_16 = 8765518558022608287ULL;
unsigned long long int var_17 = 12457038132368122854ULL;
unsigned long long int var_18 = 12836975357997616370ULL;
unsigned long long int var_19 = 18379531964750793124ULL;
unsigned long long int var_20 = 15234196779622221517ULL;
unsigned long long int var_21 = 8699405764307497625ULL;
unsigned long long int var_22 = 2614845168111196128ULL;
unsigned long long int var_23 = 12970865788748406169ULL;
unsigned long long int var_24 = 2316707434672387057ULL;
unsigned long long int arr_0 [17] [17] ;
unsigned long long int arr_1 [17] ;
unsigned long long int arr_2 [17] [17] ;
unsigned long long int arr_3 [17] [17] [17] ;
unsigned long long int arr_4 [17] [17] [17] ;
unsigned long long int arr_7 [17] [17] ;
unsigned long long int arr_9 [17] [17] [17] [17] ;
unsigned long long int arr_10 [17] [17] [17] ;
unsigned long long int arr_11 [17] [17] [17] ;
unsigned long long int arr_12 [17] [17] [17] ;
unsigned long long int arr_5 [17] ;
unsigned long long int arr_14 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 12703515706722364474ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 17578368679384058667ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 10515766152781678172ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 17098702722530984310ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 12743116822293335674ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 16121840721853061059ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 15464257599296142137ULL : 3816234412821151916ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 938866950615700295ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 104601214942464230ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 367739819846897373ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 15973606687388455272ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 18261084461286690885ULL : 11096130610748126266ULL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
