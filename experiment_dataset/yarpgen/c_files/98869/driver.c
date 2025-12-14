#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 868833901U;
signed char var_3 = (signed char)-85;
signed char var_5 = (signed char)17;
signed char var_6 = (signed char)29;
unsigned long long int var_8 = 15952294917216377683ULL;
unsigned long long int var_12 = 8625814591599339843ULL;
short var_13 = (short)31585;
short var_16 = (short)-17114;
int zero = 0;
unsigned int var_18 = 4091490807U;
unsigned int var_19 = 3858344231U;
unsigned int var_20 = 4084273929U;
unsigned long long int var_21 = 5904953708038557457ULL;
unsigned int var_22 = 699103061U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
