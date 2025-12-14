#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1375;
short var_2 = (short)-6174;
signed char var_3 = (signed char)-97;
short var_4 = (short)28489;
signed char var_6 = (signed char)-93;
short var_7 = (short)3053;
short var_8 = (short)-16581;
signed char var_9 = (signed char)-109;
signed char var_10 = (signed char)-121;
short var_12 = (short)-10527;
int zero = 0;
short var_14 = (short)13039;
signed char var_15 = (signed char)-29;
short var_16 = (short)-25894;
signed char var_17 = (signed char)-95;
short var_18 = (short)-27690;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
