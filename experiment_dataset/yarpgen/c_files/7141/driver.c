#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
long long int var_1 = -8736726643707414597LL;
int var_2 = -487772420;
unsigned long long int var_3 = 9283010924898505350ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)25817;
int var_6 = 2107394113;
int var_7 = 2120362022;
unsigned long long int var_8 = 15220883877747278747ULL;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-2767;
signed char var_13 = (signed char)21;
long long int var_15 = 4025940764949030974LL;
int zero = 0;
unsigned char var_16 = (unsigned char)35;
unsigned int var_17 = 3102662653U;
unsigned int var_18 = 4129832053U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
