#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8678270782345543710LL;
_Bool var_3 = (_Bool)0;
int var_5 = -194235922;
unsigned char var_6 = (unsigned char)243;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)109;
int zero = 0;
signed char var_11 = (signed char)-37;
long long int var_12 = 3736453165984403555LL;
signed char var_13 = (signed char)-91;
short var_14 = (short)-11134;
int var_15 = 1357214237;
long long int var_16 = -1421684313311353715LL;
unsigned long long int var_17 = 10494991863767811417ULL;
unsigned char var_18 = (unsigned char)224;
int arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1117646209;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
