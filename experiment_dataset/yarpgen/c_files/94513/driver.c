#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-124;
signed char var_5 = (signed char)57;
unsigned short var_9 = (unsigned short)44260;
unsigned char var_11 = (unsigned char)182;
signed char var_12 = (signed char)-57;
unsigned long long int var_17 = 10104248010395512453ULL;
int zero = 0;
short var_19 = (short)-28917;
unsigned int var_20 = 1352203913U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
