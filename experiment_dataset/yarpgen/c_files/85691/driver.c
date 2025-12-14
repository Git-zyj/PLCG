#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9930;
unsigned long long int var_2 = 9556267285996036429ULL;
unsigned long long int var_4 = 7076842137592931322ULL;
int var_6 = 1347750209;
unsigned long long int var_9 = 12293634849334134318ULL;
int zero = 0;
unsigned long long int var_11 = 7729388860516459336ULL;
int var_12 = -1456915460;
int var_13 = 2096722943;
unsigned long long int var_14 = 14496989209796119616ULL;
int var_15 = -1893763534;
unsigned long long int var_16 = 15794966117984252533ULL;
unsigned char var_17 = (unsigned char)144;
short var_18 = (short)8244;
int var_19 = -599156719;
short arr_0 [24] [24] ;
unsigned char arr_1 [24] ;
short arr_2 [24] [24] ;
unsigned long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-3020;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)501 : (short)-19142;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 2554035716123827691ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
