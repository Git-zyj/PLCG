#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1288196130665102728LL;
long long int var_4 = -9030350130180285308LL;
long long int var_6 = 3048690565768953145LL;
long long int var_8 = 4498400561039233889LL;
long long int var_10 = 6375610662052508825LL;
long long int var_12 = -3395811281287027890LL;
int zero = 0;
long long int var_14 = 5050144303304586782LL;
long long int var_15 = -5307547666204980891LL;
long long int var_16 = 8256580267287976615LL;
long long int var_17 = -7844856646584899352LL;
long long int var_18 = -1236546906444223736LL;
long long int arr_0 [17] ;
long long int arr_2 [17] [17] ;
long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2468572630581791375LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 8379707152753237363LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 2867008022613732067LL;
}

void checksum() {
    hash(&seed, var_14);
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
