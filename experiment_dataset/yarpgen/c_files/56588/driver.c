#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3070546520306033238LL;
long long int var_1 = -6008961558446674458LL;
long long int var_2 = -6803667037602580142LL;
long long int var_4 = -8484530414042066058LL;
long long int var_5 = 7899712549081835122LL;
long long int var_6 = 2206182813430320818LL;
long long int var_7 = -5471005319437420372LL;
long long int var_8 = -3847073910571012899LL;
long long int var_9 = -6843029295537097023LL;
long long int var_10 = -7919683239251934511LL;
long long int var_11 = 5938989960677468657LL;
long long int var_12 = -927128265309351255LL;
long long int var_13 = 2935840599560215563LL;
long long int var_14 = -7140681753864139750LL;
long long int var_15 = 1647805619914527588LL;
long long int var_16 = -1622994829272883884LL;
long long int var_18 = -5573729634996622555LL;
int zero = 0;
long long int var_19 = 9100787209016398817LL;
long long int var_20 = 4366501665655211694LL;
long long int var_21 = 7159925664771173834LL;
long long int var_22 = 4080338537696174966LL;
long long int var_23 = 1717773217049431853LL;
long long int var_24 = 9105200024283328819LL;
long long int var_25 = 3123914712541930134LL;
long long int var_26 = 4037764484586110410LL;
long long int var_27 = -179194613315109153LL;
long long int var_28 = -8636776333588696722LL;
long long int var_29 = 6042821347944976604LL;
long long int var_30 = -211082501891284960LL;
long long int var_31 = 8959448199211943396LL;
long long int var_32 = 6413563629804051793LL;
long long int var_33 = 6236146280981375423LL;
long long int var_34 = -1332388867957551765LL;
long long int var_35 = 8522238873172276541LL;
long long int var_36 = -3986052876333661924LL;
long long int var_37 = -7006832254350503301LL;
long long int var_38 = 684583521195610858LL;
long long int var_39 = -6925433019647209971LL;
long long int var_40 = -3755504619877045390LL;
long long int var_41 = 5432193198665825952LL;
long long int var_42 = 7004363610342526268LL;
long long int var_43 = 2258066150627464825LL;
long long int var_44 = 4736092741123057259LL;
long long int var_45 = -63650141984874422LL;
long long int var_46 = 6661767312003788834LL;
long long int var_47 = 4685584689560683526LL;
long long int var_48 = -7198947148356040566LL;
long long int arr_4 [12] ;
long long int arr_8 [10] ;
long long int arr_9 [10] ;
long long int arr_18 [10] [10] [10] [10] [10] ;
long long int arr_21 [10] [10] ;
long long int arr_26 [10] [10] ;
long long int arr_27 [10] [10] [10] [10] [10] [10] [10] ;
long long int arr_29 [10] [10] [10] [10] [10] [10] [10] ;
long long int arr_33 [10] [10] [10] [10] ;
long long int arr_36 [10] [10] [10] [10] [10] ;
long long int arr_37 [10] [10] [10] [10] ;
long long int arr_40 [10] [10] [10] [10] ;
long long int arr_7 [12] [12] [12] [12] ;
long long int arr_20 [10] ;
long long int arr_30 [10] ;
long long int arr_31 [10] ;
long long int arr_42 [10] [10] [10] [10] [10] ;
long long int arr_47 [10] [10] [10] [10] ;
long long int arr_51 [10] [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 2502746519081241568LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 223790536275519219LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = -3412809289369246401LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 8708591267190157119LL : 6491251091475282500LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = 3208146641611152462LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_26 [i_0] [i_1] = -8073691513756498538LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 5454799804583693468LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -766357246072551817LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = -8472009279221980655LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = 4893646940426159578LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 331977808098217732LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = -966220130659976825LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 105994092465130935LL : -3558167250393771561LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -837528827881721594LL : 6411332232201067967LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = -5990340772260636599LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_31 [i_0] = 3915994714450111781LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -6188498867170520387LL : 3394525544415662929LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -5275436722477445767LL : 8957921192417196375LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 831146774035573292LL : -1663777920629082960LL;
}

void checksum() {
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
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
