#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
signed char var_2 = (signed char)-16;
short var_3 = (short)16224;
signed char var_4 = (signed char)102;
long long int var_5 = 2727094373730277858LL;
signed char var_8 = (signed char)-107;
_Bool var_9 = (_Bool)1;
int var_11 = -1759836622;
signed char var_12 = (signed char)43;
int zero = 0;
unsigned short var_15 = (unsigned short)34944;
_Bool var_16 = (_Bool)0;
short var_17 = (short)1391;
unsigned int var_18 = 3130986452U;
long long int var_19 = 5956056002435166133LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
