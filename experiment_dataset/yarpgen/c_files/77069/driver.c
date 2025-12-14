#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)10;
signed char var_8 = (signed char)59;
long long int var_9 = 8243792956827253475LL;
int var_10 = 1160303183;
int var_11 = 1365966861;
short var_13 = (short)1358;
short var_14 = (short)31880;
long long int var_15 = -6782572004909730965LL;
signed char var_16 = (signed char)-4;
unsigned int var_17 = 1475296925U;
int zero = 0;
int var_18 = -2015374137;
unsigned long long int var_19 = 11067506839921009171ULL;
signed char var_20 = (signed char)28;
int var_21 = 1610634293;
signed char var_22 = (signed char)-9;
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
