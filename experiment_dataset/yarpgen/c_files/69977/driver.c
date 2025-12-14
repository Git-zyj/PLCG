#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9141536435694411013ULL;
unsigned long long int var_9 = 5147858095461474506ULL;
unsigned long long int var_10 = 657301063704978178ULL;
int zero = 0;
short var_11 = (short)-9726;
unsigned char var_12 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
