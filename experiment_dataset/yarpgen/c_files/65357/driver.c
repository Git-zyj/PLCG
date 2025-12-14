#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-125;
int var_4 = -1860351172;
signed char var_6 = (signed char)25;
unsigned int var_11 = 417634311U;
signed char var_15 = (signed char)80;
signed char var_16 = (signed char)-9;
int zero = 0;
signed char var_18 = (signed char)-24;
int var_19 = -747092111;
int var_20 = -1729697301;
signed char var_21 = (signed char)-82;
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
