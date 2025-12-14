#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7298299333526334711LL;
long long int var_4 = -5216708005486426464LL;
unsigned int var_5 = 3896486219U;
unsigned int var_9 = 2024683373U;
unsigned char var_10 = (unsigned char)195;
signed char var_11 = (signed char)0;
unsigned int var_13 = 1824612435U;
int zero = 0;
unsigned long long int var_14 = 7682284023853475043ULL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-24879;
unsigned short var_17 = (unsigned short)7786;
unsigned short var_18 = (unsigned short)39372;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
