#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 790516219U;
unsigned int var_1 = 1588274648U;
int var_2 = 1004373691;
unsigned char var_3 = (unsigned char)27;
unsigned long long int var_4 = 16103159954398226753ULL;
unsigned int var_6 = 395466371U;
int var_9 = 691739958;
int zero = 0;
unsigned short var_10 = (unsigned short)61658;
unsigned char var_11 = (unsigned char)91;
unsigned long long int var_12 = 3583145459557408112ULL;
unsigned int var_13 = 2429895837U;
int var_14 = 1117261269;
unsigned long long int var_15 = 2906055975319933234ULL;
unsigned long long int arr_0 [10] [10] ;
unsigned char arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 2068161140604824830ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)223;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
