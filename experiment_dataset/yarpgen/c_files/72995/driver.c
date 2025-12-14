#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)72;
long long int var_6 = -994605877664767279LL;
int var_7 = 921671275;
long long int var_10 = 8163363078674884075LL;
int var_11 = -871361497;
signed char var_12 = (signed char)-90;
int zero = 0;
int var_13 = 2119929154;
int var_14 = -1382303568;
void init() {
}

void checksum() {
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
