#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)102;
unsigned long long int var_9 = 9826135379489067717ULL;
unsigned short var_15 = (unsigned short)15815;
int zero = 0;
unsigned short var_18 = (unsigned short)15713;
unsigned long long int var_19 = 1132906868583029365ULL;
unsigned long long int var_20 = 776101964878227590ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
