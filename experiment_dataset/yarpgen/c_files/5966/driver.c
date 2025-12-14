#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 313482744826800631LL;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)120;
signed char var_4 = (signed char)-93;
signed char var_5 = (signed char)82;
unsigned short var_6 = (unsigned short)60748;
signed char var_7 = (signed char)96;
unsigned short var_8 = (unsigned short)8731;
unsigned char var_9 = (unsigned char)69;
short var_10 = (short)21347;
short var_11 = (short)-31904;
unsigned short var_12 = (unsigned short)58601;
unsigned long long int var_13 = 5575024861281469165ULL;
int zero = 0;
long long int var_14 = 1034933757740421920LL;
unsigned char var_15 = (unsigned char)64;
unsigned int var_16 = 2200180284U;
unsigned long long int var_17 = 4699035206577487611ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
