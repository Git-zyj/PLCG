#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)106;
int var_3 = -162257586;
unsigned short var_5 = (unsigned short)7138;
signed char var_6 = (signed char)13;
unsigned int var_7 = 2242103609U;
int var_9 = -1628380367;
int var_10 = -883880588;
unsigned int var_12 = 1184843178U;
_Bool var_13 = (_Bool)0;
unsigned int var_16 = 2008960573U;
long long int var_17 = 5719491575658112884LL;
int zero = 0;
int var_18 = 769090115;
unsigned short var_19 = (unsigned short)4370;
int var_20 = -267278567;
signed char var_21 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
