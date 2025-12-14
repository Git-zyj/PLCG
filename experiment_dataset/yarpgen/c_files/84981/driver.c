#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16603006687898299682ULL;
unsigned long long int var_2 = 12611244184516830557ULL;
signed char var_6 = (signed char)51;
unsigned long long int var_7 = 8731483898049105912ULL;
short var_8 = (short)-7469;
int zero = 0;
unsigned char var_10 = (unsigned char)205;
int var_11 = -1287841789;
unsigned short var_12 = (unsigned short)7102;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
