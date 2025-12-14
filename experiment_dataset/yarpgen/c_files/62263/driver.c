#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1457656702;
signed char var_3 = (signed char)116;
short var_9 = (short)-1480;
short var_10 = (short)19147;
int zero = 0;
int var_11 = -1805205394;
unsigned long long int var_12 = 17087951297582154556ULL;
unsigned char var_13 = (unsigned char)15;
signed char var_14 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
