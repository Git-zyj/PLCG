#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 789999876462415624LL;
signed char var_2 = (signed char)32;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 6890261576867778196ULL;
signed char var_6 = (signed char)48;
_Bool var_7 = (_Bool)0;
long long int var_8 = 8891934082016500442LL;
int var_9 = -1198565746;
unsigned short var_10 = (unsigned short)41228;
unsigned short var_11 = (unsigned short)41728;
unsigned short var_12 = (unsigned short)43665;
unsigned short var_13 = (unsigned short)39529;
unsigned long long int var_15 = 2465747088624862942ULL;
unsigned char var_16 = (unsigned char)80;
short var_17 = (short)22698;
unsigned long long int var_18 = 2993374714102326978ULL;
unsigned int var_19 = 810039579U;
int zero = 0;
long long int var_20 = -1244026675394896803LL;
short var_21 = (short)844;
unsigned int var_22 = 1391726262U;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 12604129215062922046ULL;
unsigned short var_25 = (unsigned short)27956;
long long int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -3737599482114190341LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
