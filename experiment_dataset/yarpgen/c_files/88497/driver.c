#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)141;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 16389661234436096098ULL;
signed char var_17 = (signed char)-39;
signed char var_18 = (signed char)102;
int zero = 0;
unsigned short var_19 = (unsigned short)15792;
unsigned long long int var_20 = 7997957764521832660ULL;
void init() {
}

void checksum() {
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
