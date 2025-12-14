#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8818201452949807856LL;
long long int var_1 = -5574269358617108281LL;
long long int var_2 = 6159519370087735515LL;
long long int var_3 = 4782346470538103832LL;
long long int var_4 = -8486970627866902801LL;
long long int var_6 = -6695780747696817283LL;
long long int var_7 = 1153369397720837312LL;
long long int var_9 = 4311687283515226335LL;
long long int var_11 = 4378892761703615668LL;
long long int var_12 = -6792981211073720287LL;
long long int var_13 = 7677325267894293469LL;
long long int var_14 = -3368704565748131789LL;
long long int var_15 = -7364404306647470778LL;
long long int var_16 = 5837812757648842372LL;
long long int var_17 = -1516945278140742207LL;
long long int var_18 = 5146212100621847062LL;
long long int var_19 = 6852693978040776220LL;
int zero = 0;
long long int var_20 = 4012400713191872835LL;
long long int var_21 = 4172165505196090069LL;
long long int var_22 = -558895447539104177LL;
long long int var_23 = 4176907877320417062LL;
long long int var_24 = -1859797562085702525LL;
long long int var_25 = 6330141061049899467LL;
long long int var_26 = -4499795152971566866LL;
long long int var_27 = -5764401709130695463LL;
long long int var_28 = 2827120415461434459LL;
long long int var_29 = -5873284925640900413LL;
long long int var_30 = -8884669148831067573LL;
long long int var_31 = 3538780069038697599LL;
long long int var_32 = 8925789697684125869LL;
long long int var_33 = 2553969204154096950LL;
long long int var_34 = -8934644991023277229LL;
long long int var_35 = 5634966306424069807LL;
long long int var_36 = 1013259523586191702LL;
long long int var_37 = -3281331506174593515LL;
long long int var_38 = -7612677334364768015LL;
long long int var_39 = 4192356710583496468LL;
long long int var_40 = 7753535325264692542LL;
long long int var_41 = -6089518817967313817LL;
long long int var_42 = -8496020079127474884LL;
long long int var_43 = 4604247888048213585LL;
long long int var_44 = -6550775193600410854LL;
long long int var_45 = -3840305117250686388LL;
long long int var_46 = -4268650419646026597LL;
long long int var_47 = -4430160110181391244LL;
long long int var_48 = -8115016776801444067LL;
long long int var_49 = -6356990883462880479LL;
long long int var_50 = -3823878286978985128LL;
long long int var_51 = -1588355848188378245LL;
long long int var_52 = -5603355067181886642LL;
long long int var_53 = 8647692150807404761LL;
long long int var_54 = -7259637466745093345LL;
long long int var_55 = -5766385667271216581LL;
long long int var_56 = -1463012957433889622LL;
long long int var_57 = 2928163509065969001LL;
long long int arr_2 [15] [15] ;
long long int arr_3 [18] [18] ;
long long int arr_4 [18] ;
long long int arr_5 [18] [18] [18] ;
long long int arr_6 [18] ;
long long int arr_7 [18] ;
long long int arr_9 [18] ;
long long int arr_10 [18] [18] [18] ;
long long int arr_11 [18] [18] [18] [18] ;
long long int arr_12 [18] [18] [18] [18] ;
long long int arr_13 [18] [18] ;
long long int arr_14 [18] [18] [18] ;
long long int arr_15 [18] [18] [18] [18] [18] ;
long long int arr_16 [18] [18] [18] [18] ;
long long int arr_17 [18] [18] [18] [18] ;
long long int arr_18 [18] ;
long long int arr_19 [18] [18] [18] [18] [18] [18] ;
long long int arr_21 [18] [18] [18] [18] [18] [18] ;
long long int arr_23 [18] [18] [18] [18] ;
long long int arr_24 [18] [18] [18] [18] [18] ;
long long int arr_25 [18] [18] [18] [18] ;
long long int arr_26 [18] [18] [18] [18] [18] [18] ;
long long int arr_27 [18] [18] [18] [18] [18] ;
long long int arr_32 [18] ;
long long int arr_35 [18] [18] [18] [18] ;
long long int arr_37 [18] [18] [18] ;
long long int arr_41 [18] [18] [18] [18] [18] ;
long long int arr_43 [18] [18] [18] [18] ;
long long int arr_50 [23] [23] ;
long long int arr_8 [18] ;
long long int arr_22 [18] [18] [18] [18] ;
long long int arr_28 [18] [18] ;
long long int arr_42 [18] [18] [18] [18] [18] [18] ;
long long int arr_49 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -7468776811267339341LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -7639484157713977142LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 7906492397278297064LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4937447657381934304LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -5591665437031975966LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -7123383737670941745LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = -3021992592927002777LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 6226110559079628362LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -6714581616474016464LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -4113551907906876259LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = 5649267011811153652LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -4984336680596942379LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 6606415753364496715LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -307152226128402548LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 6639367529071039625LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 1670802473029401036LL : 2823385545718491708LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -963606571515906325LL : -8922576006938151714LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 6395859834583599548LL : -6735147105699827295LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 4891481790702648553LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = -8049242966687981747LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 7199189091286487184LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8986630496474565973LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 253483445220151598LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = -1291133400957608714LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = -8663106484999538172LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = -7476700658339280071LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = -4231989168546920544LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = 4429582984625937104LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_50 [i_0] [i_1] = (i_1 % 2 == 0) ? -4358923317989982014LL : 4124077165104270840LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = -694630611073968790LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1344477268387545199LL : -3043207726130356127LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_28 [i_0] [i_1] = -6268278017645619586LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -5683883183867624754LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_49 [i_0] = 5069658644594738429LL;
}

void checksum() {
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
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_49 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
