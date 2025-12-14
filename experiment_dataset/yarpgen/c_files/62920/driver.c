#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2160662876U;
unsigned long long int var_5 = 13034291039567827105ULL;
unsigned int var_9 = 2340300996U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 9671664342510741839ULL;
unsigned long long int var_16 = 14487949131606876673ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
