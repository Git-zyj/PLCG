#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7830521867917531364LL;
short var_2 = (short)-17159;
long long int var_4 = 1332865486697102631LL;
unsigned long long int var_12 = 13682782065898620800ULL;
signed char var_15 = (signed char)115;
unsigned int var_16 = 122321648U;
int zero = 0;
long long int var_17 = -8834488970607257757LL;
signed char var_18 = (signed char)-18;
long long int var_19 = 6926773544192543082LL;
unsigned short var_20 = (unsigned short)16849;
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
