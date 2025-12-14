#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
int var_2 = -691994294;
unsigned long long int var_3 = 3741457090136060005ULL;
long long int var_9 = -6646059874550385857LL;
unsigned long long int var_10 = 5597955062045476589ULL;
signed char var_14 = (signed char)75;
unsigned int var_18 = 3551953755U;
int zero = 0;
short var_19 = (short)3920;
unsigned int var_20 = 755862263U;
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
