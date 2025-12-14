#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8699809398574862529ULL;
signed char var_1 = (signed char)-25;
unsigned int var_2 = 1280694236U;
unsigned int var_3 = 3268964548U;
unsigned long long int var_4 = 251171490679442030ULL;
long long int var_5 = -1635139369927907842LL;
unsigned int var_6 = 194452058U;
signed char var_9 = (signed char)88;
int zero = 0;
unsigned int var_10 = 4240874327U;
long long int var_11 = -7319123312694952455LL;
long long int var_12 = 410699534260689157LL;
unsigned long long int var_13 = 10055068021567858884ULL;
signed char var_14 = (signed char)59;
unsigned long long int var_15 = 18350981169530554672ULL;
long long int var_16 = -8926128413533150880LL;
signed char var_17 = (signed char)124;
long long int var_18 = 680096211026281487LL;
unsigned int var_19 = 211652174U;
unsigned int var_20 = 2856512629U;
unsigned int var_21 = 3470826314U;
long long int arr_2 [17] [17] ;
long long int arr_3 [17] ;
long long int arr_5 [17] [17] [17] ;
unsigned long long int arr_7 [17] [17] [17] [17] ;
unsigned long long int arr_9 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_11 [17] [17] [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 5129470348560608739LL : 6740918911894580703LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -8277314478410283666LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -6489149133849812449LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 15057499282024317981ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 16685274102203862699ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 10653271821655506303ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
