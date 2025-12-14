#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2474967053U;
unsigned int var_1 = 3705963048U;
unsigned long long int var_2 = 1214415358872865528ULL;
unsigned long long int var_4 = 13004302531853671993ULL;
unsigned long long int var_5 = 11002997916153490453ULL;
unsigned long long int var_9 = 4789842109680680217ULL;
unsigned long long int var_11 = 7044810684444147457ULL;
int zero = 0;
unsigned int var_12 = 3373669364U;
unsigned long long int var_13 = 5816722413246932308ULL;
unsigned long long int var_14 = 1413390478277244946ULL;
unsigned int var_15 = 1027062118U;
unsigned long long int var_16 = 1698728479700683791ULL;
unsigned long long int var_17 = 2558702966460428522ULL;
unsigned long long int var_18 = 5571992555437812308ULL;
unsigned int var_19 = 3606610499U;
unsigned long long int var_20 = 8628364416960617990ULL;
unsigned long long int var_21 = 17787165911376120216ULL;
unsigned long long int var_22 = 9404678446004177052ULL;
unsigned int var_23 = 2543029679U;
unsigned long long int var_24 = 5284888978057487518ULL;
unsigned long long int var_25 = 10694065040872786015ULL;
unsigned int var_26 = 3769575447U;
unsigned int var_27 = 2602625060U;
unsigned int var_28 = 2812401410U;
unsigned int arr_1 [12] [12] ;
unsigned long long int arr_2 [17] ;
unsigned int arr_3 [17] ;
unsigned long long int arr_10 [17] [17] [17] [17] ;
unsigned int arr_14 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 1524660806U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 5287748507291741043ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1181313359U : 2664553176U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 4077244659092848521ULL : 13802670463566059709ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 4165491929U : 3778402497U;
}

void checksum() {
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
