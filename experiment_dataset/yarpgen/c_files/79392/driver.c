#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3666135550434020553LL;
signed char var_5 = (signed char)-106;
unsigned char var_6 = (unsigned char)196;
unsigned long long int var_8 = 15016344249865558232ULL;
int var_9 = -271572304;
int zero = 0;
int var_11 = -2094817135;
unsigned long long int var_12 = 4000107735885466867ULL;
unsigned long long int var_13 = 16848205427459815816ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
