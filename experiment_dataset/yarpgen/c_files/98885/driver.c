#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1156091497;
int var_1 = 502243703;
signed char var_14 = (signed char)-77;
long long int var_17 = -1137489696443000380LL;
unsigned short var_19 = (unsigned short)62488;
int zero = 0;
unsigned char var_20 = (unsigned char)139;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 1752720534016673285ULL;
void init() {
}

void checksum() {
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
