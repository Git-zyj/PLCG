#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 4422805817249660656LL;
unsigned short var_10 = (unsigned short)61924;
long long int var_12 = 5834172852551995790LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -744631401393552687LL;
int var_17 = -1388645666;
int zero = 0;
unsigned short var_18 = (unsigned short)414;
short var_19 = (short)20989;
unsigned short var_20 = (unsigned short)1012;
unsigned int arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2722871504U : 555447216U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 13807291205752350567ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
