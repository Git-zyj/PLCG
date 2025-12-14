#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
unsigned int var_1 = 673187940U;
unsigned int var_2 = 2880253061U;
signed char var_4 = (signed char)-98;
signed char var_5 = (signed char)-1;
signed char var_7 = (signed char)39;
signed char var_8 = (signed char)54;
int zero = 0;
unsigned int var_11 = 2495018259U;
signed char var_12 = (signed char)-68;
unsigned short var_13 = (unsigned short)9830;
unsigned int var_14 = 2965567647U;
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
