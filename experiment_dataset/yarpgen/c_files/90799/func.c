/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90799
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)12))));
        var_17 = (+(arr_2 [i_0] [i_0]));
        arr_4 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)4821)) : (((/* implicit */int) (unsigned char)94))))));
        var_18 = (+(((/* implicit */int) (unsigned char)28)));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (((-(var_6))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) (unsigned short)12);
    var_21 = min((((unsigned long long int) (+(-336841747)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53788))) ^ (max((((/* implicit */unsigned int) (signed char)-32)), (2406799495U)))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)94)) && (((/* implicit */_Bool) (short)-11721))));
    /* LoopSeq 4 */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)87);
        var_23 = ((/* implicit */signed char) (-(((unsigned long long int) ((((/* implicit */_Bool) 2087910023U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_1])))))));
    }
    for (long long int i_2 = 4; i_2 < 10; i_2 += 2) 
    {
        var_24 -= ((/* implicit */short) -3398617150564580743LL);
        var_25 = ((/* implicit */unsigned int) (+(0ULL)));
        var_26 += ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) == (min((((/* implicit */unsigned int) var_9)), (var_6))))))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) 
            {
                for (long long int i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    {
                        arr_18 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) 1888167801U)) - (max((5332721927291383159ULL), (((/* implicit */unsigned long long int) (unsigned char)228)))))), (((/* implicit */unsigned long long int) max(((unsigned char)87), (arr_6 [i_5 - 2]))))));
                        var_27 *= ((unsigned long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) : (5332721927291383159ULL)));
                        var_28 = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
            var_29 -= ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), (2087910023U)))));
            var_30 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_14 [i_2 + 4])) ^ (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) arr_10 [i_2 + 4] [i_2 + 3])) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (unsigned char)216))))));
        }
        for (unsigned short i_6 = 3; i_6 < 12; i_6 += 2) /* same iter space */
        {
            arr_22 [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)25232));
            var_31 = ((/* implicit */unsigned char) ((signed char) (+(((5371043113770692888LL) << (((((/* implicit */int) var_13)) - (134))))))));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((short) max((max((((/* implicit */unsigned long long int) (unsigned char)157)), (5332721927291383159ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */int) arr_14 [i_6 - 2])) : (((/* implicit */int) (signed char)125)))))))))));
            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (signed char)-1)), (arr_13 [i_6 + 2] [i_6] [0LL]))), (((/* implicit */unsigned short) (unsigned char)113)))))));
            var_34 = ((((/* implicit */_Bool) max((arr_16 [i_2 + 2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_2] [i_2] [6ULL])))))))) ? (max((arr_17 [i_6] [i_6] [i_6] [i_6 + 2] [i_6]), (((/* implicit */unsigned int) ((unsigned char) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))));
        }
        for (unsigned short i_7 = 3; i_7 < 12; i_7 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3884645823525588757ULL)))))) / (((((/* implicit */_Bool) var_13)) ? (14562098250183962859ULL) : (((/* implicit */unsigned long long int) -7581928159805805838LL)))))))))));
            arr_25 [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (arr_17 [i_2] [i_7] [i_7] [i_2] [i_2])))) ? (((((/* implicit */_Bool) 2774454134429948680ULL)) ? (((/* implicit */unsigned long long int) 2575714310U)) : (10404363524394031357ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))) != (((/* implicit */unsigned long long int) 2718290879547892847LL))));
            arr_26 [i_2] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) var_8);
            var_36 += ((/* implicit */unsigned int) (short)-27399);
            var_37 += ((/* implicit */unsigned char) max((((132785714237941490ULL) & (((/* implicit */unsigned long long int) 901000429U)))), (((/* implicit */unsigned long long int) (unsigned char)29))));
        }
    }
    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */int) (short)32758)), ((~(((/* implicit */int) (unsigned short)2048))))))), (((1400711573122568964LL) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8] [i_8])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_9 = 1; i_9 < 7; i_9 += 1) 
        {
            arr_33 [i_9] = ((/* implicit */long long int) (signed char)42);
            var_39 = ((/* implicit */unsigned int) arr_19 [i_8]);
        }
        var_40 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)11)) != (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_1 [i_8] [i_8])))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_21 [i_8] [i_8]))))));
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned short) ((unsigned char) 262142));
        arr_35 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? ((+(7581928159805805856LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)167))))))));
    }
    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned char) (~(max((2774454134429948680ULL), (((/* implicit */unsigned long long int) arr_12 [i_10]))))));
        arr_40 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((4007634445932291871ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_10])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_37 [i_10] [i_10])))))))) ? (((/* implicit */int) ((signed char) 18422086653473582566ULL))) : (((((/* implicit */_Bool) ((11580477725259900729ULL) >> (((((/* implicit */int) (unsigned char)167)) - (128)))))) ? (((/* implicit */int) arr_30 [i_10])) : (((/* implicit */int) var_0))))));
    }
}
