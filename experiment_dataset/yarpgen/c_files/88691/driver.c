#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)194;
int var_2 = -2138333188;
int var_3 = -924574181;
unsigned char var_4 = (unsigned char)46;
signed char var_5 = (signed char)-16;
unsigned long long int var_6 = 14781891272623839947ULL;
unsigned short var_7 = (unsigned short)37725;
long long int var_9 = -1216606411154601511LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 13692172281584836698ULL;
short var_12 = (short)8057;
long long int var_13 = 6255149737857716492LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 927162369U;
int var_16 = 936826784;
unsigned char var_17 = (unsigned char)41;
int var_18 = -257944848;
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
