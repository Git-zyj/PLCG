#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6847039055566500110LL;
short var_3 = (short)-30316;
long long int var_4 = 1091985606800798106LL;
short var_7 = (short)-15756;
signed char var_8 = (signed char)-17;
long long int var_9 = 6533474417268451103LL;
short var_18 = (short)-19193;
int zero = 0;
int var_19 = 1548728716;
_Bool var_20 = (_Bool)0;
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
