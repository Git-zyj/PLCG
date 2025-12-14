#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned long long int var_1 = 11616423915639083333ULL;
long long int var_4 = -7584971440710613941LL;
signed char var_6 = (signed char)50;
long long int var_9 = 4242684981879110396LL;
short var_10 = (short)-3777;
int zero = 0;
int var_14 = 1767801760;
long long int var_15 = -8600628643208843684LL;
int var_16 = 19142521;
unsigned short var_17 = (unsigned short)61532;
signed char var_18 = (signed char)-30;
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
