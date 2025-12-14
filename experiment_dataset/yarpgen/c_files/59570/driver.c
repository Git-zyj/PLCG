#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58614;
unsigned long long int var_2 = 14427672968897635762ULL;
int var_4 = -461131961;
unsigned long long int var_9 = 13703821239451920586ULL;
long long int var_10 = -7867786317193032944LL;
int var_11 = -293438410;
int zero = 0;
signed char var_13 = (signed char)69;
long long int var_14 = -2606167275591970662LL;
long long int var_15 = -2787810545574818000LL;
signed char var_16 = (signed char)-106;
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
