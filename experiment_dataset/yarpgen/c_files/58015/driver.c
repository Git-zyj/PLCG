#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 273887871;
int var_4 = -1689733816;
long long int var_11 = -3064288480278298008LL;
int zero = 0;
unsigned long long int var_15 = 2707618067844577704ULL;
int var_16 = 1397797489;
long long int var_17 = 2270190267370367551LL;
unsigned int var_18 = 1428166765U;
int var_19 = 473661521;
unsigned char var_20 = (unsigned char)146;
int var_21 = 1489590439;
unsigned int var_22 = 1911870150U;
unsigned int arr_0 [21] ;
unsigned short arr_2 [21] ;
unsigned long long int arr_5 [21] [21] ;
_Bool arr_7 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3691148240U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)57033;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 910033647080466202ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
