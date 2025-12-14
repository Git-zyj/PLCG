#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)106;
unsigned char var_3 = (unsigned char)135;
int var_4 = -1291527588;
long long int var_6 = -8468496046380172480LL;
long long int var_7 = 1667090976914994242LL;
unsigned short var_8 = (unsigned short)40910;
_Bool var_9 = (_Bool)0;
long long int var_10 = 2859570381886775785LL;
int var_11 = 272492976;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)18656;
_Bool var_17 = (_Bool)0;
long long int var_18 = -4026227875379988612LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)49680;
_Bool var_21 = (_Bool)0;
int var_22 = 1552932663;
unsigned char arr_1 [22] ;
_Bool arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
