#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 928801521;
unsigned long long int var_3 = 9035399152261810092ULL;
unsigned int var_5 = 1915455113U;
short var_6 = (short)24690;
unsigned short var_7 = (unsigned short)19164;
int var_8 = 15672921;
unsigned long long int var_9 = 5521683416394853467ULL;
unsigned long long int var_11 = 6736184984624815943ULL;
unsigned char var_13 = (unsigned char)241;
long long int var_14 = 3300806836751849611LL;
int zero = 0;
signed char var_17 = (signed char)-78;
short var_18 = (short)-19561;
signed char var_19 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
