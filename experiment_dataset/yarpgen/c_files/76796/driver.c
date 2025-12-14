#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1423684177;
int var_1 = -21734473;
long long int var_2 = 6802253981332280961LL;
unsigned char var_3 = (unsigned char)252;
int var_4 = 1729985575;
int var_7 = -1451440444;
unsigned char var_8 = (unsigned char)77;
long long int var_9 = 1265434251730010871LL;
unsigned long long int var_12 = 11579667848221956410ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)189;
int var_14 = 881770871;
int var_15 = 1381152411;
unsigned char var_16 = (unsigned char)17;
int var_17 = -927768337;
unsigned long long int var_18 = 14114117388768122267ULL;
unsigned char var_19 = (unsigned char)199;
long long int var_20 = 1324724857738976112LL;
unsigned long long int var_21 = 6129880334782439827ULL;
unsigned long long int var_22 = 9207637721710436377ULL;
unsigned long long int var_23 = 3297439354109232407ULL;
unsigned char var_24 = (unsigned char)96;
unsigned char arr_0 [21] ;
unsigned char arr_4 [21] [21] ;
long long int arr_6 [21] [21] ;
int arr_8 [21] [21] [21] ;
unsigned char arr_18 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 2399026861519007679LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1010179834 : -323744793;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)110;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
