#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
signed char var_2 = (signed char)25;
signed char var_6 = (signed char)-110;
signed char var_8 = (signed char)79;
signed char var_9 = (signed char)43;
signed char var_11 = (signed char)121;
signed char var_13 = (signed char)76;
int zero = 0;
signed char var_17 = (signed char)-54;
signed char var_18 = (signed char)127;
signed char var_19 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
