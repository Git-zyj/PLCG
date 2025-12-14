#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12561689409331508145ULL;
unsigned char var_4 = (unsigned char)208;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2067729129U;
unsigned int var_9 = 3107743408U;
int var_10 = -33701655;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-26942;
int zero = 0;
short var_17 = (short)-7878;
int var_18 = -952286271;
short var_19 = (short)18840;
unsigned long long int var_20 = 7947563780872043294ULL;
long long int var_21 = 2093073107477354230LL;
unsigned int var_22 = 1897949149U;
_Bool var_23 = (_Bool)1;
int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1137550170;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
