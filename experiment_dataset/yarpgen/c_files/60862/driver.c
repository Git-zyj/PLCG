#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)44;
unsigned short var_4 = (unsigned short)5688;
long long int var_7 = 1987956723523140958LL;
long long int var_8 = 723023521987262169LL;
int zero = 0;
long long int var_10 = 7666502879670938464LL;
unsigned long long int var_11 = 3007799111013072286ULL;
unsigned long long int var_12 = 4188970763685990626ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
