#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 790564433;
short var_3 = (short)28517;
int var_6 = -977848834;
unsigned short var_7 = (unsigned short)6228;
unsigned char var_8 = (unsigned char)51;
unsigned int var_9 = 3753691222U;
unsigned char var_11 = (unsigned char)19;
unsigned short var_12 = (unsigned short)54457;
long long int var_15 = -6900972657886075048LL;
unsigned short var_16 = (unsigned short)8140;
int zero = 0;
short var_17 = (short)-23399;
short var_18 = (short)-1624;
short var_19 = (short)-16868;
unsigned short var_20 = (unsigned short)417;
void init() {
}

void checksum() {
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
