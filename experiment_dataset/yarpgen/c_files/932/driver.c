#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1722366099U;
unsigned long long int var_1 = 13685408027952725227ULL;
short var_2 = (short)-269;
unsigned long long int var_3 = 18015925412564835146ULL;
unsigned long long int var_4 = 4712577952060570329ULL;
unsigned int var_5 = 3116571062U;
short var_6 = (short)14180;
unsigned long long int var_7 = 12156276575069494478ULL;
unsigned int var_8 = 3757817109U;
short var_9 = (short)-5636;
unsigned long long int var_10 = 7890298518834906728ULL;
short var_11 = (short)-28998;
short var_12 = (short)-21358;
unsigned int var_13 = 3943331144U;
short var_14 = (short)18016;
unsigned long long int var_15 = 5917379693356125242ULL;
short var_16 = (short)-23757;
short var_17 = (short)-26540;
int zero = 0;
short var_18 = (short)26389;
unsigned long long int var_19 = 10310025540848426592ULL;
short var_20 = (short)7332;
unsigned int var_21 = 1356204619U;
unsigned int var_22 = 714970718U;
unsigned int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
unsigned int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3604642168U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5758557944187880777ULL : 7463107217944323927ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 249638058U : 1788807966U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
