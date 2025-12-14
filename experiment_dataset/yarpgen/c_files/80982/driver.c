#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11890;
unsigned long long int var_1 = 7651430793430984664ULL;
short var_2 = (short)20303;
signed char var_3 = (signed char)-22;
unsigned long long int var_5 = 12335537375043603449ULL;
long long int var_7 = -3002977407115919566LL;
unsigned int var_9 = 1641826489U;
long long int var_10 = -3396615184036889911LL;
unsigned short var_11 = (unsigned short)57195;
int zero = 0;
short var_12 = (short)4239;
unsigned int var_13 = 4104454195U;
unsigned int var_14 = 2638797849U;
unsigned short var_15 = (unsigned short)56098;
unsigned short var_16 = (unsigned short)36614;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
