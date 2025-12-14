#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 238869037U;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 3851371427U;
long long int var_5 = 3220274633213103231LL;
short var_6 = (short)-31795;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)10825;
unsigned long long int var_10 = 1572310225798307320ULL;
unsigned short var_11 = (unsigned short)41710;
signed char var_12 = (signed char)18;
unsigned long long int var_13 = 14770410763433906964ULL;
int zero = 0;
signed char var_15 = (signed char)21;
unsigned long long int var_16 = 1326694610494092193ULL;
unsigned long long int var_17 = 6083336374633204007ULL;
unsigned int var_18 = 3832096743U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
