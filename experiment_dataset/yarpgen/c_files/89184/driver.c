#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1315546349U;
signed char var_1 = (signed char)91;
signed char var_2 = (signed char)49;
unsigned long long int var_4 = 7764230391387265449ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 17107932619242105194ULL;
signed char var_7 = (signed char)86;
signed char var_9 = (signed char)97;
signed char var_12 = (signed char)117;
int zero = 0;
long long int var_17 = -6145415579430100418LL;
long long int var_18 = 1455325251607500730LL;
signed char var_19 = (signed char)-80;
signed char var_20 = (signed char)109;
void init() {
}

void checksum() {
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
