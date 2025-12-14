#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-12;
signed char var_2 = (signed char)90;
unsigned long long int var_6 = 3359532436170553500ULL;
long long int var_7 = -3795918232373601411LL;
unsigned int var_9 = 3709125409U;
unsigned int var_10 = 1804029041U;
long long int var_13 = 817231245537015263LL;
unsigned short var_14 = (unsigned short)30738;
int zero = 0;
signed char var_15 = (signed char)-10;
int var_16 = -1642808310;
long long int var_17 = 449160030408649557LL;
short var_18 = (short)1820;
unsigned long long int var_19 = 9433987798561304624ULL;
unsigned int var_20 = 2996617198U;
unsigned int var_21 = 3295548374U;
int arr_0 [12] ;
signed char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1807016654;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)90;
}

void checksum() {
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
