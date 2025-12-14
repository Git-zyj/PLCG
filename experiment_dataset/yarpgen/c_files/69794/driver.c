#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -761626673;
unsigned long long int var_3 = 3949334839459341306ULL;
unsigned long long int var_8 = 15078473086083332105ULL;
unsigned short var_9 = (unsigned short)3150;
int var_11 = 951530907;
int zero = 0;
unsigned long long int var_13 = 3194077043952128098ULL;
unsigned short var_14 = (unsigned short)8367;
int var_15 = 1049309159;
int var_16 = 1714744001;
unsigned long long int arr_0 [19] ;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 15022418490886575607ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)43587;
}

void checksum() {
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
