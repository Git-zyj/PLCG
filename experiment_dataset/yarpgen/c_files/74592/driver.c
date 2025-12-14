#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8320324423683277244LL;
unsigned short var_9 = (unsigned short)17613;
long long int var_13 = -6890466510005015438LL;
int zero = 0;
unsigned long long int var_14 = 2337121133446563871ULL;
long long int var_15 = -7538327703536740664LL;
int var_16 = -1301351183;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
