#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2360389553194100796LL;
unsigned long long int var_3 = 11397197016308565697ULL;
long long int var_4 = 4192997973563399294LL;
long long int var_6 = 2988004669569497461LL;
long long int var_7 = 6083604991502662624LL;
unsigned short var_9 = (unsigned short)18977;
long long int var_10 = 6432697820193995311LL;
long long int var_16 = 1650429031824675106LL;
int zero = 0;
unsigned long long int var_17 = 2278810313357469276ULL;
unsigned short var_18 = (unsigned short)59822;
long long int var_19 = 6683955470753060903LL;
long long int var_20 = 5533723969875953468LL;
long long int arr_0 [17] [17] ;
int arr_1 [17] ;
unsigned int arr_2 [17] [17] ;
int arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -4360337912138848143LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1314213384;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 3730204723U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = -930678269;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
