#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45523;
unsigned short var_2 = (unsigned short)31021;
long long int var_3 = 2308214922431494268LL;
long long int var_11 = -173170716804577542LL;
unsigned long long int var_16 = 16213675784101728101ULL;
int zero = 0;
int var_18 = -997084744;
short var_19 = (short)10869;
unsigned long long int var_20 = 5884339602285446633ULL;
unsigned char var_21 = (unsigned char)202;
unsigned char arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)56 : (unsigned char)206;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
