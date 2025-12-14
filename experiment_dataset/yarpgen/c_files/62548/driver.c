#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3684706593U;
signed char var_2 = (signed char)63;
short var_3 = (short)-20726;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)17;
unsigned char var_8 = (unsigned char)52;
signed char var_11 = (signed char)-16;
long long int var_12 = -3820982710908941066LL;
unsigned short var_13 = (unsigned short)40144;
unsigned long long int var_14 = 16447055115463190924ULL;
int var_15 = -522213572;
long long int var_18 = 5272758675867918823LL;
int zero = 0;
signed char var_19 = (signed char)-112;
unsigned char var_20 = (unsigned char)31;
long long int var_21 = 220163065697904857LL;
signed char var_22 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
