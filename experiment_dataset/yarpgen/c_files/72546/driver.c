#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2432605139U;
unsigned long long int var_1 = 15342537479493215ULL;
int var_4 = -1638842763;
short var_5 = (short)-7385;
short var_6 = (short)9527;
unsigned int var_9 = 3227088915U;
int zero = 0;
long long int var_10 = 4534848535240343995LL;
unsigned long long int var_11 = 5272768825876499429ULL;
signed char var_12 = (signed char)63;
unsigned long long int var_13 = 12553468572697397789ULL;
signed char var_14 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
