#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5991810518527664756LL;
int var_2 = -1407666394;
signed char var_4 = (signed char)116;
unsigned short var_6 = (unsigned short)18354;
signed char var_7 = (signed char)35;
unsigned long long int var_8 = 10146807649022085219ULL;
int zero = 0;
long long int var_10 = -5729184057354847544LL;
int var_11 = -1371776407;
unsigned short var_12 = (unsigned short)44546;
unsigned int var_13 = 1376857342U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
