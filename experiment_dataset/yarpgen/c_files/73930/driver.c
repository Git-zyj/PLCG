#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2827023266556128141LL;
long long int var_1 = 4800983424886268854LL;
long long int var_3 = 861087952402824457LL;
long long int var_5 = -218596638249267723LL;
long long int var_7 = -5268920135779317765LL;
long long int var_11 = 6978722546885801674LL;
long long int var_13 = -4276748137694942932LL;
long long int var_14 = -3608781696591516665LL;
long long int var_15 = -7673383274799787498LL;
long long int var_16 = 7237210319122693746LL;
int zero = 0;
long long int var_19 = -2279246011281837612LL;
long long int var_20 = -4053907736583382182LL;
long long int var_21 = 2226788686407275224LL;
long long int var_22 = -1582816177829065554LL;
long long int var_23 = 6950120040976091175LL;
long long int var_24 = -1086378106286813612LL;
long long int arr_0 [18] ;
long long int arr_1 [18] [18] ;
long long int arr_3 [18] ;
long long int arr_4 [18] [18] [18] ;
long long int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3931708319738490463LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 7995361975577513487LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7668197644932391486LL : -5968746388781661000LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2654120402674588245LL : 2483479739122491153LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2741735990913030469LL : 6431304650363583193LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
