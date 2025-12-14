#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1509619215;
long long int var_4 = -7825116225054501140LL;
long long int var_6 = -6250578204747494366LL;
long long int var_7 = 5796977652128090083LL;
int var_9 = -473382760;
short var_11 = (short)8295;
short var_12 = (short)16549;
int var_13 = 2104055383;
int var_15 = -515042230;
short var_16 = (short)-6499;
int var_17 = 130668863;
int zero = 0;
unsigned char var_20 = (unsigned char)108;
short var_21 = (short)-7164;
int var_22 = -520284959;
unsigned long long int var_23 = 2395018364091404394ULL;
long long int arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 3557076588803088643LL : 1707057793799738686LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)174 : (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -366067515 : -1229747086;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
