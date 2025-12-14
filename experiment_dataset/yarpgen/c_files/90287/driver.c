#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3957127894677583081ULL;
unsigned long long int var_1 = 7108749910799536858ULL;
unsigned int var_2 = 1058610194U;
unsigned long long int var_3 = 10924256393209064529ULL;
unsigned char var_5 = (unsigned char)136;
short var_6 = (short)-29738;
unsigned char var_7 = (unsigned char)214;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1725790756U;
int var_10 = 652358910;
long long int var_11 = -1366762997247328938LL;
unsigned int var_13 = 2747193345U;
short var_14 = (short)10793;
unsigned char var_15 = (unsigned char)237;
long long int var_17 = 6127087729135302554LL;
signed char var_19 = (signed char)-54;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 163154769U;
long long int var_22 = 7241160013890391180LL;
unsigned int var_23 = 1262992553U;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 12288515166890652417ULL;
signed char arr_3 [15] [15] ;
int arr_4 [15] ;
signed char arr_8 [15] [15] [15] [15] ;
unsigned char arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-123 : (signed char)-78;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -1481012093;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)172 : (unsigned char)133;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
