#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
unsigned long long int var_1 = 10579163334285926966ULL;
unsigned long long int var_3 = 7524842969901761241ULL;
short var_8 = (short)22590;
short var_11 = (short)3687;
int zero = 0;
long long int var_20 = -7247509916437883480LL;
unsigned short var_21 = (unsigned short)57706;
unsigned long long int var_22 = 15010503022213010437ULL;
signed char var_23 = (signed char)82;
unsigned int var_24 = 2989926250U;
int var_25 = 1095459792;
signed char var_26 = (signed char)-124;
short var_27 = (short)-26958;
unsigned short arr_2 [19] ;
long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)55508;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -7570913719903225940LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
