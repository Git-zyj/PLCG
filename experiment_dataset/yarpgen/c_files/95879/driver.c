#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
unsigned long long int var_1 = 5315630562902537697ULL;
unsigned long long int var_2 = 9251089534949327402ULL;
long long int var_3 = -2134099952992418121LL;
long long int var_5 = -8155819989830079719LL;
unsigned short var_7 = (unsigned short)4308;
unsigned char var_8 = (unsigned char)19;
unsigned short var_9 = (unsigned short)57585;
unsigned long long int var_10 = 2543678717291322302ULL;
int zero = 0;
unsigned int var_11 = 3497686038U;
unsigned int var_12 = 903153976U;
unsigned long long int var_13 = 16886261553695628103ULL;
unsigned long long int var_14 = 1232795998310634268ULL;
unsigned char var_15 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
