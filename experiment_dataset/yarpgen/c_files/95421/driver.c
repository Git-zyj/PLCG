#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1061284789472808228ULL;
unsigned long long int var_1 = 10376611432122532268ULL;
long long int var_2 = -986643122190398985LL;
unsigned long long int var_3 = 1405602735362608081ULL;
unsigned long long int var_4 = 12839048278768199108ULL;
unsigned long long int var_6 = 16942750559910309353ULL;
long long int var_7 = 6398345668832221070LL;
unsigned long long int var_8 = 3697190086482342079ULL;
long long int var_10 = 5613500113274082752LL;
unsigned long long int var_12 = 11446654533298662925ULL;
unsigned long long int var_13 = 16142779615963107984ULL;
int zero = 0;
unsigned long long int var_15 = 17358214501961013123ULL;
unsigned long long int var_16 = 110494105720955154ULL;
unsigned long long int var_17 = 6233486522583432368ULL;
long long int var_18 = 8031795298514306128LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
