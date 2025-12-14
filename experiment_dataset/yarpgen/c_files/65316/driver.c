#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 484469351859151414ULL;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-16342;
int var_6 = -283001254;
int var_11 = 1440679265;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-12;
long long int var_14 = 3642009955883860464LL;
int zero = 0;
long long int var_17 = -828175818899073777LL;
long long int var_18 = -848463088048789447LL;
int var_19 = -329264815;
unsigned char var_20 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
