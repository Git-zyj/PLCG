#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10756;
int var_1 = -2084073917;
short var_2 = (short)23188;
unsigned char var_3 = (unsigned char)70;
_Bool var_4 = (_Bool)1;
long long int var_5 = 2606229574888295904LL;
unsigned long long int var_7 = 1050794894903800870ULL;
long long int var_8 = -7421394276318039311LL;
unsigned long long int var_9 = 8144488774922989860ULL;
unsigned long long int var_15 = 11438436941025789201ULL;
unsigned short var_16 = (unsigned short)44111;
int zero = 0;
unsigned short var_17 = (unsigned short)43494;
short var_18 = (short)4779;
short var_19 = (short)22457;
int var_20 = -400898847;
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
