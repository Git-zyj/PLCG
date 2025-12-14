#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8214170950404805200ULL;
signed char var_1 = (signed char)62;
signed char var_2 = (signed char)54;
signed char var_3 = (signed char)-68;
signed char var_4 = (signed char)-65;
int var_5 = 776832503;
unsigned char var_6 = (unsigned char)57;
long long int var_8 = -3800566282167175488LL;
unsigned long long int var_9 = 16610755636761748896ULL;
int zero = 0;
unsigned long long int var_10 = 1752924236031523366ULL;
unsigned long long int var_11 = 709253878547796602ULL;
long long int var_12 = 218348643269831146LL;
int var_13 = -13784629;
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
