/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56699
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
    var_12 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_13 ^= ((((/* implicit */int) ((arr_2 [i_0] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_0 [i_1])))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) var_0);
                var_14 = (((_Bool)1) || (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 + 1])) && (((/* implicit */_Bool) (unsigned char)95)))));
                var_15 &= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_0 [i_2]) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) & (((/* implicit */int) (unsigned char)84))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2 - 2]))) : (arr_5 [i_0] [i_1] [5U])))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 2; i_3 < 19; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_6 [i_3 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))) : ((-(arr_7 [i_0] [i_0])))))) || (((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)76)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_18 *= ((/* implicit */unsigned char) ((int) arr_12 [i_0] [i_1] [i_2] [i_3 - 2] [i_4]));
                        arr_15 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((-977232714) > (((/* implicit */int) (_Bool)0))))) > ((+(((/* implicit */int) (unsigned char)63))))));
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_6))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) >> (((/* implicit */int) (_Bool)1)))))));
                        arr_17 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */int) ((3214131838U) + (arr_7 [i_3 + 1] [i_3 + 1])));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_2 + 1] [i_3] [i_3] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_3))))));
                        arr_22 [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 739826109))));
                    }
                    var_20 ^= ((/* implicit */_Bool) ((unsigned char) var_5));
                }
                for (unsigned int i_6 = 2; i_6 < 19; i_6 += 1) /* same iter space */
                {
                    arr_25 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-28170))) - (arr_2 [i_0] [i_2]))))) >= (((/* implicit */int) ((((((/* implicit */int) (unsigned char)93)) <= (((/* implicit */int) (unsigned char)93)))) && ((_Bool)1))))));
                    arr_26 [i_0] = ((/* implicit */unsigned int) (~(1955737746)));
                }
            }
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            arr_38 [i_0] [i_0] [i_1] [i_9] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                            var_21 *= ((/* implicit */unsigned int) ((-340963058) >= (((/* implicit */int) (_Bool)1))));
                            var_22 &= ((/* implicit */_Bool) (+(-1)));
                        }
                    } 
                } 
                var_23 += ((/* implicit */unsigned char) ((_Bool) (unsigned char)223));
            }
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_0]))));
        }
        var_25 = ((/* implicit */unsigned char) var_7);
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))));
        var_27 &= ((/* implicit */int) max((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [(short)17] [i_0] [(short)17] [i_0] [i_0]))))), (((arr_2 [i_0] [i_0]) + (((/* implicit */unsigned int) var_5)))))), (((/* implicit */unsigned int) (_Bool)1))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_42 [i_10] [i_10] = ((/* implicit */short) (+(((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-144)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (short)4095)) && ((_Bool)1))))))));
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1))))));
        var_29 = var_1;
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)195)) * (((/* implicit */int) var_6))))), (1588323861U))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_47 [i_11] [i_11] = ((/* implicit */short) ((((var_11) & (4294967295U))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        /* LoopSeq 3 */
        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
        {
            var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_27 [i_11] [i_12] [i_11])) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (var_7))))))) ? (max((2307291309U), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) arr_10 [i_11] [i_12] [i_11] [i_11] [i_12] [i_12]))), (arr_40 [i_11] [i_12])))))));
            arr_50 [(unsigned char)4] [i_11] = ((/* implicit */_Bool) (unsigned char)60);
            arr_51 [i_11] = (+(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_23 [i_12] [i_12] [i_11] [i_11] [i_11])))))));
        }
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
        {
            arr_54 [i_11] [i_11] = ((/* implicit */unsigned int) var_3);
            var_32 = ((/* implicit */short) ((arr_31 [i_11] [i_13] [i_13] [i_11]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_11])))));
            var_33 *= ((/* implicit */_Bool) 1987675986U);
        }
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
        {
            var_34 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) arr_29 [i_11] [i_14])) + (((/* implicit */int) arr_11 [i_14] [i_14] [i_11] [i_11] [i_11] [i_11])))))))));
            /* LoopNest 2 */
            for (short i_15 = 1; i_15 < 8; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    {
                        var_35 -= ((/* implicit */unsigned char) arr_52 [i_16] [i_15] [i_11]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_17 = 1; i_17 < 7; i_17 += 3) 
                        {
                            var_36 |= (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3920744864U)))));
                            var_37 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_65 [10U] [i_14] [i_16 + 1] [i_17 + 3] [i_17] [i_17] [i_17])) >= (((/* implicit */int) arr_65 [i_15 + 3] [i_16] [i_16 + 1] [i_17 + 3] [i_17 + 1] [i_17 + 2] [i_17]))));
                        }
                        var_38 *= ((/* implicit */_Bool) (unsigned char)0);
                        var_39 = ((/* implicit */int) min((arr_28 [i_15 + 2] [i_16] [i_16 + 1]), (arr_28 [i_15 + 2] [i_15] [i_16 + 1])));
                        arr_67 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-160))) + (3635328034U)));
                    }
                } 
            } 
            arr_68 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) ((max((1914817713), (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (((/* implicit */int) var_1))));
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) (((~(arr_44 [i_14]))) >= ((+(2521910719U)))))) > (max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (_Bool)1))))));
        }
    }
}
