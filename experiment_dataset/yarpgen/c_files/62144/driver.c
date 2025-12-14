#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)180;
int var_2 = -1769608403;
unsigned long long int var_3 = 3080103450983153656ULL;
int var_5 = 1087228153;
unsigned long long int var_6 = 5004314969400619786ULL;
unsigned int var_8 = 1216954524U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 9314791879196750217ULL;
unsigned long long int var_11 = 14486231665053636998ULL;
long long int var_13 = 451945368624733508LL;
int var_14 = -777834574;
unsigned short var_15 = (unsigned short)52260;
signed char var_16 = (signed char)-62;
long long int var_17 = -7492000723320594035LL;
int zero = 0;
unsigned short var_18 = (unsigned short)64509;
int var_19 = 1792450757;
_Bool var_20 = (_Bool)1;
long long int var_21 = -1180848843748015727LL;
_Bool var_22 = (_Bool)1;
_Bool arr_4 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
