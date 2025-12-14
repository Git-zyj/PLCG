#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 5881633116144837797LL;
unsigned char var_5 = (unsigned char)244;
signed char var_6 = (signed char)-30;
unsigned short var_7 = (unsigned short)18530;
_Bool var_8 = (_Bool)0;
long long int var_13 = -3387374380000739439LL;
int zero = 0;
unsigned long long int var_14 = 8603577053654544098ULL;
signed char var_15 = (signed char)-23;
unsigned char var_16 = (unsigned char)155;
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
