#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
unsigned long long int var_2 = 7706864251823110546ULL;
unsigned int var_4 = 2951990263U;
signed char var_5 = (signed char)121;
short var_7 = (short)-29517;
int var_9 = -561383198;
int var_10 = -1465182439;
int zero = 0;
unsigned long long int var_12 = 4708726743306093014ULL;
unsigned long long int var_13 = 3721268962291412635ULL;
short var_14 = (short)23681;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
