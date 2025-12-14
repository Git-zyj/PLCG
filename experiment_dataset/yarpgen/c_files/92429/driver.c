#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7176426912940000467LL;
long long int var_1 = 7588869681851141177LL;
unsigned long long int var_2 = 6881037344615531631ULL;
short var_3 = (short)-26733;
signed char var_5 = (signed char)116;
int var_9 = 1913756088;
int var_10 = 2106467292;
int var_12 = -2051977313;
int zero = 0;
long long int var_13 = 6057363160189652094LL;
long long int var_14 = -548202120308288660LL;
signed char var_15 = (signed char)118;
unsigned long long int var_16 = 12515758961294795869ULL;
long long int var_17 = 7009917449461128692LL;
unsigned long long int var_18 = 1968667635868610090ULL;
signed char var_19 = (signed char)-35;
long long int var_20 = -5363090336211267085LL;
unsigned long long int var_21 = 17283814466159081177ULL;
short var_22 = (short)-1725;
unsigned short var_23 = (unsigned short)13933;
long long int var_24 = 8252349527974456141LL;
unsigned long long int var_25 = 11456070225896705169ULL;
int var_26 = -395808351;
signed char var_27 = (signed char)-1;
unsigned long long int var_28 = 12248411388938392219ULL;
int var_29 = -2123276370;
unsigned short var_30 = (unsigned short)42617;
unsigned char var_31 = (unsigned char)238;
int var_32 = 9445777;
signed char var_33 = (signed char)22;
long long int var_34 = 607053099934394018LL;
unsigned long long int var_35 = 1742095071323038743ULL;
long long int var_36 = -7848004426082384724LL;
unsigned long long int var_37 = 9085852402019937557ULL;
unsigned int var_38 = 2089586518U;
signed char var_39 = (signed char)-92;
unsigned int var_40 = 289427002U;
long long int arr_0 [17] ;
long long int arr_1 [17] [17] ;
int arr_2 [17] ;
unsigned long long int arr_3 [17] [17] ;
long long int arr_4 [17] [17] ;
unsigned char arr_5 [17] [17] ;
unsigned long long int arr_7 [17] ;
int arr_11 [25] ;
int arr_12 [25] ;
long long int arr_13 [25] ;
long long int arr_14 [25] ;
unsigned long long int arr_18 [10] ;
unsigned int arr_24 [10] [10] ;
_Bool arr_26 [10] [10] [10] ;
short arr_29 [10] [10] [10] ;
unsigned short arr_51 [10] [10] [10] [10] ;
unsigned long long int arr_8 [17] ;
int arr_9 [17] [17] ;
int arr_10 [17] ;
int arr_19 [10] ;
signed char arr_20 [10] ;
int arr_23 [10] [10] ;
unsigned char arr_31 [10] [10] ;
long long int arr_32 [10] [10] [10] ;
long long int arr_35 [10] [10] [10] ;
unsigned long long int arr_39 [10] ;
unsigned short arr_44 [10] [10] ;
unsigned long long int arr_48 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -8812132656865394033LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -5685704569285723359LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 1665769783;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 14413255467567883240ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = -3654808156077874184LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 11037571032232926748ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 289148944;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = -2051116679;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = -6653416067298343044LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = -7754610307265164827LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = 2061449410170387547ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = 900690705U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (short)-18959;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (unsigned short)29982;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 5614794805954536153ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 1733969155;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 1011971840;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = 1500449207;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? -1242572311 : -1563943289;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)96 : (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -4478076254324333607LL : 8456888255378941655LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2550616200330259897LL : 5831954991229643249LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? 2297072573254558519ULL : 4625718801985814779ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_44 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)36086 : (unsigned short)52204;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_48 [i_0] [i_1] = (i_0 % 2 == 0) ? 4759115423946439025ULL : 6707757046985622242ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_48 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
