#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15861894342867867751ULL;
short var_4 = (short)27393;
signed char var_5 = (signed char)107;
signed char var_7 = (signed char)100;
unsigned short var_8 = (unsigned short)60479;
unsigned int var_9 = 65995405U;
unsigned char var_11 = (unsigned char)37;
int var_12 = 1565802614;
int zero = 0;
int var_13 = -742998189;
short var_14 = (short)-25669;
unsigned int var_15 = 393325184U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
