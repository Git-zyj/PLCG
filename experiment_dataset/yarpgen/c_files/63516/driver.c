#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2779;
signed char var_3 = (signed char)8;
signed char var_4 = (signed char)-111;
unsigned long long int var_7 = 7497092213231993707ULL;
unsigned long long int var_8 = 5632372425122705026ULL;
int zero = 0;
short var_10 = (short)1235;
int var_11 = -784890841;
short var_12 = (short)-11146;
long long int var_13 = 3749616054021215522LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
