#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13205874689572999189ULL;
unsigned long long int var_2 = 10030446919484596318ULL;
unsigned long long int var_3 = 15501897551756165029ULL;
unsigned long long int var_5 = 14842585319101579353ULL;
unsigned long long int var_6 = 9838891557704746055ULL;
long long int var_8 = -6983825112913290678LL;
unsigned long long int var_9 = 2111010737059574207ULL;
int zero = 0;
long long int var_10 = 1456386869759240970LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 3414776784031300708ULL;
unsigned long long int var_13 = 3843097106017643615ULL;
long long int var_14 = -6730747719427259309LL;
long long int var_15 = 3899772536339045573LL;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_2 [15] ;
unsigned long long int arr_3 [15] ;
long long int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1204326555508900562ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 15550844662026571501ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 11078021335131872672ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 603062255060133045LL : 3141772175942381706LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
