#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2568434065U;
long long int var_6 = 3912398927085712514LL;
long long int var_10 = 559918263952883421LL;
unsigned int var_11 = 955685916U;
long long int var_13 = -3649952934183233833LL;
unsigned int var_19 = 3318226711U;
int zero = 0;
unsigned short var_20 = (unsigned short)25161;
long long int var_21 = -7083807316013461602LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
