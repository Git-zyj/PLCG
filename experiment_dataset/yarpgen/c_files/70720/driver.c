#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15501;
unsigned long long int var_2 = 17683105249139567500ULL;
signed char var_3 = (signed char)-75;
unsigned long long int var_7 = 13806909535359938480ULL;
int var_9 = 896030301;
unsigned long long int var_11 = 6959317596301485360ULL;
int zero = 0;
unsigned long long int var_18 = 15970179323643674547ULL;
unsigned long long int var_19 = 10045660537376445861ULL;
long long int var_20 = -5225592411873026083LL;
unsigned short var_21 = (unsigned short)20412;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
