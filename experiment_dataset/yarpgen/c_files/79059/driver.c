#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8114178883086375423LL;
int var_3 = -540090791;
int var_4 = -1624248949;
int var_5 = -1028805124;
unsigned long long int var_7 = 10814843787981039993ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = -84585285079334244LL;
unsigned char var_11 = (unsigned char)25;
int var_12 = 253305082;
long long int var_13 = -4299754162989152754LL;
signed char var_14 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
