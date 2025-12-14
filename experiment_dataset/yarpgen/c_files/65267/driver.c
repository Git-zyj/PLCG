#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51443;
unsigned long long int var_1 = 13642879459822794537ULL;
unsigned long long int var_2 = 2432874151806082743ULL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)110;
unsigned long long int var_10 = 5326881902728030848ULL;
int zero = 0;
signed char var_13 = (signed char)-82;
short var_14 = (short)21120;
signed char var_15 = (signed char)102;
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
