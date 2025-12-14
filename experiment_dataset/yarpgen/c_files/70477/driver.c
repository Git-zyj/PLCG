#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18211348318041554502ULL;
unsigned long long int var_4 = 9199777201188086023ULL;
unsigned long long int var_6 = 807224258813935147ULL;
signed char var_8 = (signed char)74;
signed char var_12 = (signed char)113;
int var_13 = 1225096252;
unsigned short var_14 = (unsigned short)15341;
int zero = 0;
unsigned char var_18 = (unsigned char)186;
int var_19 = 2023725562;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
