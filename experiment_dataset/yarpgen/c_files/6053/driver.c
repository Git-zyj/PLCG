#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4028328209U;
short var_1 = (short)-2344;
int var_2 = -446240221;
unsigned int var_3 = 2261908431U;
int var_4 = -590366202;
int var_5 = 230064887;
int var_6 = -752280292;
unsigned char var_7 = (unsigned char)176;
unsigned short var_8 = (unsigned short)31851;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)23755;
long long int var_12 = -3016344463324960846LL;
unsigned int var_13 = 2400606726U;
int var_14 = -243218891;
int var_15 = -528194834;
unsigned short var_16 = (unsigned short)64787;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_4 [14] [14] ;
unsigned short arr_8 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 943083324702478340ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 2297416006166755012ULL : 17864372441506407913ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)55090;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
