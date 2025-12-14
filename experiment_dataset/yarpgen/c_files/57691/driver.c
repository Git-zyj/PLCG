#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20497;
signed char var_5 = (signed char)-52;
unsigned short var_7 = (unsigned short)59363;
signed char var_9 = (signed char)42;
unsigned long long int var_17 = 12712324250259748959ULL;
unsigned short var_18 = (unsigned short)51335;
unsigned short var_19 = (unsigned short)6453;
int zero = 0;
unsigned int var_20 = 3593005322U;
signed char var_21 = (signed char)68;
unsigned char var_22 = (unsigned char)163;
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
