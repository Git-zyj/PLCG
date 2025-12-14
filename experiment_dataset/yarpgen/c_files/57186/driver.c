#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19100;
unsigned long long int var_1 = 7692359897397942889ULL;
_Bool var_2 = (_Bool)1;
int var_8 = -1046839899;
_Bool var_9 = (_Bool)0;
signed char var_13 = (signed char)-56;
unsigned long long int var_16 = 4507285885196979519ULL;
unsigned char var_17 = (unsigned char)92;
int zero = 0;
unsigned long long int var_18 = 60157632204889167ULL;
signed char var_19 = (signed char)126;
long long int var_20 = -7386177188119388281LL;
int var_21 = -49707505;
unsigned long long int var_22 = 17804297663808712221ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
