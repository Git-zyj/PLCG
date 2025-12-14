#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-115;
int var_4 = -406475123;
signed char var_6 = (signed char)10;
unsigned int var_18 = 2505301884U;
int zero = 0;
signed char var_20 = (signed char)22;
long long int var_21 = -741445177402853939LL;
int var_22 = -1325302791;
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
