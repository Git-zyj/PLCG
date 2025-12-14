#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9196083294697636111LL;
long long int var_1 = 2297472581042765288LL;
long long int var_3 = -5349604522928209956LL;
long long int var_6 = 5773836677559996462LL;
long long int var_7 = 6603960897565494865LL;
long long int var_12 = 3455205776941104716LL;
long long int var_14 = 2737177491573568472LL;
long long int var_15 = -4353785887915298992LL;
int zero = 0;
long long int var_20 = -5326114728264141354LL;
long long int var_21 = 6995114832882989382LL;
long long int var_22 = 88420813937850688LL;
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
