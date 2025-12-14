#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8145472365373693488LL;
unsigned short var_1 = (unsigned short)26199;
long long int var_2 = 7359746951816773230LL;
unsigned short var_6 = (unsigned short)49789;
int zero = 0;
unsigned char var_13 = (unsigned char)219;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-76;
unsigned long long int var_16 = 9665300489420954546ULL;
long long int var_17 = -7624782459926741276LL;
signed char arr_0 [22] [22] ;
signed char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)50;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
