#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9611;
unsigned char var_4 = (unsigned char)210;
signed char var_5 = (signed char)-52;
unsigned char var_6 = (unsigned char)110;
unsigned int var_7 = 3221231438U;
signed char var_8 = (signed char)105;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)27;
unsigned char var_12 = (unsigned char)254;
int var_15 = 468623208;
int zero = 0;
unsigned long long int var_19 = 9736581318456466641ULL;
unsigned int var_20 = 4064835215U;
int var_21 = -1170470282;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
