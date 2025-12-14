#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 12737051229249745095ULL;
unsigned long long int var_2 = 14063806515832378081ULL;
int var_3 = 277774323;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 13880657324903122146ULL;
unsigned short var_9 = (unsigned short)16470;
unsigned short var_10 = (unsigned short)64786;
long long int var_11 = -4846958956594973315LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 15454955038913433099ULL;
unsigned short var_14 = (unsigned short)45823;
unsigned char var_15 = (unsigned char)122;
unsigned long long int var_16 = 16275725590814146907ULL;
_Bool var_17 = (_Bool)1;
long long int var_18 = -7730687741608709269LL;
short var_19 = (short)32188;
unsigned char arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)35;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
