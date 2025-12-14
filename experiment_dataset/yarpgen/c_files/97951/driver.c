#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11955;
short var_3 = (short)-31344;
unsigned long long int var_4 = 5214979939131445060ULL;
long long int var_5 = 9115261030542081738LL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 462890386U;
signed char var_10 = (signed char)-48;
unsigned long long int var_11 = 5060876068813395169ULL;
unsigned long long int var_16 = 17818688193355291855ULL;
unsigned long long int var_17 = 6504247477412837153ULL;
int zero = 0;
int var_19 = 1754352268;
long long int var_20 = -8688400597695292071LL;
unsigned short var_21 = (unsigned short)9902;
signed char var_22 = (signed char)68;
int var_23 = 1564632168;
short var_24 = (short)12085;
unsigned short var_25 = (unsigned short)28542;
short var_26 = (short)12206;
signed char var_27 = (signed char)49;
unsigned int var_28 = 1817147497U;
unsigned int var_29 = 4005401666U;
short var_30 = (short)-5952;
int arr_0 [19] ;
long long int arr_1 [19] ;
unsigned long long int arr_2 [19] [19] [19] ;
unsigned int arr_6 [19] ;
unsigned long long int arr_7 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -581383458;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -8103481279072443204LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4579310434402628325ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2806310760U : 248794207U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 12797845101164520703ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
