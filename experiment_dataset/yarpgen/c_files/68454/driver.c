#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2745472528114264133LL;
long long int var_4 = -7431872502148393651LL;
long long int var_5 = -2813032637924266804LL;
unsigned char var_7 = (unsigned char)100;
signed char var_8 = (signed char)106;
signed char var_9 = (signed char)32;
unsigned char var_10 = (unsigned char)135;
int var_12 = 1026797288;
unsigned long long int var_13 = 12945949401499972762ULL;
long long int var_15 = 4062777748418785338LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 4059710616U;
unsigned long long int var_19 = 1070695521845504257ULL;
unsigned long long int var_20 = 14466413911342978083ULL;
unsigned char var_21 = (unsigned char)118;
unsigned long long int var_22 = 15965114883375317862ULL;
signed char arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)85;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
