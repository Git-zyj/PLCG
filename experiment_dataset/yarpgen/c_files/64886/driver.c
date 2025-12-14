#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -523028495;
unsigned long long int var_3 = 12797792535795935524ULL;
int var_4 = -957626834;
signed char var_5 = (signed char)-51;
unsigned long long int var_9 = 10230743206748897363ULL;
int var_10 = -1762462506;
int var_11 = 921973776;
int zero = 0;
signed char var_13 = (signed char)-35;
short var_14 = (short)18694;
unsigned short var_15 = (unsigned short)24461;
signed char var_16 = (signed char)-59;
signed char var_17 = (signed char)-118;
int var_18 = 1416002386;
signed char var_19 = (signed char)-106;
int var_20 = -1593095208;
signed char var_21 = (signed char)-126;
int arr_0 [12] ;
int arr_6 [25] ;
unsigned long long int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1752027366;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -1189485905;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 13374325877992378760ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
