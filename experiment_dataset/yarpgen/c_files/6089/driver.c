#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-29;
unsigned int var_4 = 988605210U;
short var_7 = (short)18585;
long long int var_9 = -39095988484983980LL;
int zero = 0;
long long int var_11 = -3674829986076510454LL;
short var_12 = (short)-24444;
unsigned short var_13 = (unsigned short)5481;
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
