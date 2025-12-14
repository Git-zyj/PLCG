#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20178;
long long int var_3 = -7218150770513777837LL;
unsigned long long int var_4 = 10824059171035477355ULL;
int var_5 = -1241049833;
short var_7 = (short)-13333;
int var_8 = 354819688;
unsigned char var_9 = (unsigned char)146;
short var_10 = (short)-637;
int var_11 = 898972062;
short var_12 = (short)21425;
int zero = 0;
long long int var_13 = 3334276613274507696LL;
short var_14 = (short)-24963;
long long int var_15 = -4546987637768002486LL;
short var_16 = (short)11565;
unsigned long long int arr_0 [14] ;
unsigned char arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 10307907615270410232ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)188;
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
