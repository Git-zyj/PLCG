#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7136193106173111795ULL;
int var_4 = -1498247738;
unsigned short var_8 = (unsigned short)13807;
unsigned long long int var_11 = 7405033788709700495ULL;
unsigned short var_15 = (unsigned short)28172;
unsigned long long int var_16 = 5484560513902691768ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)32325;
unsigned long long int var_21 = 17135891191662409344ULL;
int var_22 = -1126014233;
void init() {
}

void checksum() {
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
