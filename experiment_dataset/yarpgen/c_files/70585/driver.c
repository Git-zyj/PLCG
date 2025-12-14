#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8204;
int var_3 = 2121863135;
unsigned long long int var_6 = 10643199537720291223ULL;
unsigned long long int var_11 = 4176965931297206957ULL;
int zero = 0;
int var_15 = 1045100655;
unsigned long long int var_16 = 10215474722125255675ULL;
int var_17 = -1736181754;
signed char var_18 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
