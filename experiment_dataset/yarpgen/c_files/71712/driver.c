#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4472498746458497951LL;
unsigned short var_7 = (unsigned short)23324;
unsigned short var_8 = (unsigned short)30948;
unsigned long long int var_9 = 12132581295012838862ULL;
signed char var_11 = (signed char)-13;
short var_12 = (short)13116;
int zero = 0;
signed char var_13 = (signed char)113;
int var_14 = 622974545;
_Bool var_15 = (_Bool)1;
short var_16 = (short)9752;
unsigned long long int var_17 = 5059928707724430025ULL;
unsigned long long int arr_0 [17] [17] ;
short arr_1 [17] ;
unsigned short arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 15327897076594545764ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)14994;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)20550;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
