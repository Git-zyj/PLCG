#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
long long int var_3 = -942780272376393967LL;
unsigned long long int var_5 = 16263514083938022698ULL;
unsigned long long int var_6 = 9153115266074340756ULL;
signed char var_9 = (signed char)(-127 - 1);
unsigned short var_11 = (unsigned short)37039;
unsigned int var_12 = 1354930948U;
int zero = 0;
unsigned int var_13 = 1144256735U;
short var_14 = (short)1601;
unsigned long long int var_15 = 3238843592658964060ULL;
unsigned long long int var_16 = 15758081402412557653ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
