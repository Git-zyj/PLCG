#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
int var_1 = 1366457169;
unsigned long long int var_4 = 17191323408217692422ULL;
short var_5 = (short)-28756;
unsigned long long int var_7 = 7974456319866830689ULL;
int var_8 = 590291457;
short var_9 = (short)20348;
long long int var_11 = 3447971305592086942LL;
unsigned long long int var_12 = 12925587391661677857ULL;
int zero = 0;
int var_14 = 654412605;
unsigned char var_15 = (unsigned char)248;
unsigned int var_16 = 1075492615U;
unsigned short var_17 = (unsigned short)52311;
unsigned long long int var_18 = 2213742297449445314ULL;
unsigned long long int var_19 = 7799587146726335679ULL;
long long int var_20 = -2420343477640643657LL;
unsigned int var_21 = 1088322094U;
unsigned long long int arr_2 [11] ;
unsigned int arr_3 [11] [11] [11] ;
long long int arr_4 [11] ;
long long int arr_5 [11] ;
unsigned char arr_6 [11] [11] ;
unsigned int arr_8 [14] ;
unsigned int arr_9 [14] ;
unsigned long long int arr_10 [14] [14] ;
unsigned long long int arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2301846161933260993ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2073094679U : 2932541250U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -7530382434358536233LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1120441388975856935LL : 2663470141001630317LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 4085953434U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 694391906U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 4031932687383475448ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 9489266188601443757ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
