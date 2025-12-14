#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9572;
unsigned long long int var_2 = 14405087261506218327ULL;
short var_4 = (short)-24967;
signed char var_5 = (signed char)84;
long long int var_16 = -2064777070945512076LL;
unsigned long long int var_17 = 18046256711503279906ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)57542;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 3624716960369748344ULL;
short var_23 = (short)-20061;
long long int var_24 = 6197104976030480960LL;
short var_25 = (short)-27633;
_Bool arr_0 [17] ;
_Bool arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
