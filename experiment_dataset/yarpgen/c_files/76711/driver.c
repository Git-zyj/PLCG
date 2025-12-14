#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 16556876798617873885ULL;
signed char var_3 = (signed char)49;
signed char var_4 = (signed char)-39;
int var_5 = -756526465;
unsigned long long int var_7 = 5327307503599577146ULL;
unsigned long long int var_9 = 7658035323063774219ULL;
signed char var_10 = (signed char)-121;
unsigned long long int var_11 = 6643978966808582320ULL;
int var_12 = -680764149;
int zero = 0;
unsigned long long int var_17 = 190326748759948832ULL;
int var_18 = -939460302;
int var_19 = 64657167;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
