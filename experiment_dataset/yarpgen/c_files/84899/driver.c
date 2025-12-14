#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11426296774556998656ULL;
int var_5 = 995674734;
int var_6 = -10010445;
int zero = 0;
signed char var_10 = (signed char)5;
unsigned short var_11 = (unsigned short)39180;
signed char var_12 = (signed char)-118;
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
