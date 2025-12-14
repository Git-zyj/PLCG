#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1445113174U;
unsigned char var_1 = (unsigned char)140;
long long int var_2 = 8876973475564101582LL;
signed char var_3 = (signed char)-94;
long long int var_4 = 2195076871420020999LL;
long long int var_8 = -2290107085793933879LL;
long long int var_11 = 2091418444373193794LL;
unsigned int var_12 = 420625950U;
unsigned long long int var_13 = 15659490603631908680ULL;
signed char var_14 = (signed char)23;
int zero = 0;
signed char var_16 = (signed char)-74;
unsigned long long int var_17 = 6357060557247836427ULL;
unsigned long long int var_18 = 9768223503413448862ULL;
int var_19 = -102264385;
unsigned char var_20 = (unsigned char)163;
unsigned long long int var_21 = 555497636165532688ULL;
unsigned char var_22 = (unsigned char)18;
short arr_0 [12] [12] ;
long long int arr_1 [12] [12] ;
short arr_6 [12] ;
unsigned int arr_7 [12] ;
unsigned int arr_2 [12] ;
short arr_3 [12] ;
unsigned long long int arr_4 [12] ;
int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)31102;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -5534568498109568120LL : 704789811934162418LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)1228;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 1732827248U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3145686044U : 1311730098U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-16000 : (short)-31286;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 17792660733530401323ULL : 5729815705852986340ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 860028418 : 20693288;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
