#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
_Bool var_1 = (_Bool)0;
int var_2 = 263858601;
signed char var_4 = (signed char)18;
unsigned char var_5 = (unsigned char)110;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-46;
long long int var_9 = -3845450907634847605LL;
int zero = 0;
unsigned short var_11 = (unsigned short)15636;
signed char var_12 = (signed char)-116;
unsigned char var_13 = (unsigned char)3;
int var_14 = 534741420;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
