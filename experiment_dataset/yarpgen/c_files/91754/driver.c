#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)81;
unsigned long long int var_4 = 6559209926313225087ULL;
unsigned long long int var_5 = 7782471708489317892ULL;
unsigned short var_9 = (unsigned short)23983;
signed char var_12 = (signed char)-55;
int zero = 0;
signed char var_13 = (signed char)1;
short var_14 = (short)27100;
unsigned short var_15 = (unsigned short)61193;
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
