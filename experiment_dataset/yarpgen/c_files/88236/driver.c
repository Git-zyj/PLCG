#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-54;
unsigned long long int var_4 = 14880507176470797164ULL;
unsigned char var_6 = (unsigned char)220;
int var_9 = 987606005;
unsigned long long int var_11 = 14016806324614795063ULL;
short var_14 = (short)-25230;
int zero = 0;
long long int var_15 = 1147969767721647291LL;
unsigned char var_16 = (unsigned char)81;
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
