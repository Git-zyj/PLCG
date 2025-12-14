#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 927749369151955184ULL;
unsigned long long int var_1 = 6354978656176816173ULL;
long long int var_2 = -57355911958148938LL;
short var_3 = (short)-23121;
long long int var_4 = 6388063653890684425LL;
signed char var_5 = (signed char)-50;
unsigned int var_7 = 3477750806U;
unsigned long long int var_8 = 11806207904479703505ULL;
unsigned char var_9 = (unsigned char)136;
int zero = 0;
short var_10 = (short)4500;
unsigned long long int var_11 = 13165698824240480675ULL;
short var_12 = (short)-27696;
unsigned short var_13 = (unsigned short)28015;
unsigned long long int arr_0 [24] ;
unsigned long long int arr_1 [24] [24] ;
int arr_3 [24] ;
unsigned long long int arr_4 [24] ;
unsigned long long int arr_2 [24] [24] ;
unsigned long long int arr_6 [24] ;
unsigned short arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 14347134323650005161ULL : 12764086477912614395ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 9132487043732730592ULL : 1419869979863458534ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 619225567;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 18181697859407472805ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 8089597826586322111ULL : 12727596133780357656ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 10931959032599161833ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)54859;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
