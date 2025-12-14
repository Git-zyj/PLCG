#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4703259847146963378LL;
unsigned long long int var_7 = 6307711927589927727ULL;
unsigned short var_10 = (unsigned short)55815;
long long int var_13 = 5098388513633974039LL;
int var_15 = -7575032;
int zero = 0;
unsigned long long int var_17 = 15823084474867183073ULL;
unsigned long long int var_18 = 17136257179913017583ULL;
long long int var_19 = 2465355961501965129LL;
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
