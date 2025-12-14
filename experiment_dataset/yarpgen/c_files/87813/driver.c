#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5633927724825041226ULL;
unsigned short var_5 = (unsigned short)6971;
unsigned long long int var_11 = 15626851303119234815ULL;
unsigned long long int var_12 = 1670003413030009255ULL;
int zero = 0;
unsigned long long int var_13 = 12575757868528057913ULL;
unsigned long long int var_14 = 8716546432077219487ULL;
unsigned short var_15 = (unsigned short)11160;
long long int var_16 = 2067296095691035019LL;
long long int var_17 = 873608124229516806LL;
unsigned char var_18 = (unsigned char)17;
unsigned char var_19 = (unsigned char)63;
short var_20 = (short)-29539;
unsigned long long int arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7407254608722094612ULL : 1968547565117753760ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
