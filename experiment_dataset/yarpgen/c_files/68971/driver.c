#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 288946818U;
int var_11 = 1336940424;
unsigned int var_12 = 3070572413U;
unsigned int var_13 = 3873575396U;
unsigned long long int var_14 = 10696378941812924242ULL;
short var_16 = (short)-5338;
int var_17 = 1473104846;
int zero = 0;
unsigned long long int var_18 = 883648287735669451ULL;
unsigned int var_19 = 478446728U;
void init() {
}

void checksum() {
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
