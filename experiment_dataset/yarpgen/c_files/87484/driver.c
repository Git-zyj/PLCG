#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)28;
unsigned int var_4 = 3015939375U;
int var_5 = -355376575;
signed char var_6 = (signed char)-89;
unsigned int var_8 = 796381491U;
int var_9 = 1971944864;
unsigned int var_10 = 2117745891U;
unsigned int var_12 = 547340827U;
int zero = 0;
int var_15 = -377459990;
signed char var_16 = (signed char)9;
unsigned int var_17 = 1029249821U;
signed char var_18 = (signed char)-37;
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
