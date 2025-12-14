#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4273808376031383337ULL;
short var_6 = (short)-10373;
unsigned long long int var_7 = 4381144415900320133ULL;
int var_9 = -1922627844;
int zero = 0;
unsigned long long int var_18 = 6916492088024967059ULL;
long long int var_19 = 5581155761240314198LL;
signed char var_20 = (signed char)74;
void init() {
}

void checksum() {
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
