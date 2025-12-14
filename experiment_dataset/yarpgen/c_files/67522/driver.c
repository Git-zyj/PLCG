#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-180;
short var_4 = (short)8148;
unsigned long long int var_6 = 17573442353776155340ULL;
unsigned char var_7 = (unsigned char)113;
unsigned short var_8 = (unsigned short)818;
int var_9 = -256602678;
unsigned char var_16 = (unsigned char)41;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = 4440074378023627373LL;
unsigned short var_19 = (unsigned short)55514;
unsigned char var_20 = (unsigned char)177;
unsigned long long int var_21 = 12370643977475427563ULL;
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
