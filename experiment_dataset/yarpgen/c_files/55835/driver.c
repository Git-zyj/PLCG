#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)7;
int zero = 0;
unsigned short var_16 = (unsigned short)22129;
unsigned long long int var_17 = 10534747858127485870ULL;
long long int var_18 = -5713964426562616351LL;
unsigned short var_19 = (unsigned short)15699;
unsigned short var_20 = (unsigned short)37163;
long long int var_21 = 9156631555686764523LL;
int var_22 = 883804364;
short var_23 = (short)-25721;
signed char var_24 = (signed char)-42;
unsigned long long int var_25 = 8641979729552102903ULL;
long long int var_26 = -6067096178442484372LL;
unsigned long long int var_27 = 592097405701437271ULL;
signed char var_28 = (signed char)49;
long long int var_29 = -7296814816012335004LL;
unsigned long long int var_30 = 10763166519433433597ULL;
short var_31 = (short)-19794;
long long int var_32 = 2162784628618023256LL;
signed char var_33 = (signed char)-71;
unsigned long long int var_34 = 2915048797481636179ULL;
unsigned short var_35 = (unsigned short)54591;
unsigned long long int arr_6 [22] ;
long long int arr_16 [22] [22] [22] [22] ;
unsigned long long int arr_23 [23] ;
long long int arr_28 [21] ;
unsigned long long int arr_35 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 17261200441040325431ULL : 8056943078727824117ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -8066422886755779114LL : -1778816720028400332LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = 6867282662958189545ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = -3860835752118354802LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_35 [i_0] = 1186952699157671965ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
