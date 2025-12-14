#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -439958342633386750LL;
unsigned short var_1 = (unsigned short)57884;
unsigned long long int var_7 = 13817472709995434235ULL;
unsigned long long int var_9 = 831069366687698014ULL;
long long int var_11 = 7881685768735667598LL;
int zero = 0;
signed char var_16 = (signed char)-24;
long long int var_17 = -3817893234862869370LL;
long long int var_18 = -8305691533445090924LL;
long long int var_19 = 5336731700223771072LL;
int var_20 = 1014846789;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
