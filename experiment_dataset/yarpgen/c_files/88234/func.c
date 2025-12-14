/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88234
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
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) > (arr_4 [i_0] [i_0] [i_1]))))) : (((var_14) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)127))))))));
                var_17 = ((/* implicit */signed char) (+(max((2147483647), (((((/* implicit */_Bool) 2990994160U)) ? (((/* implicit */int) (unsigned short)21626)) : (((/* implicit */int) (unsigned char)233))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_2)))) && (((/* implicit */_Bool) ((var_11) + (arr_5 [i_2] [i_0])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_3] [i_3] [i_3] [(_Bool)1] [i_3] [i_0] = ((/* implicit */unsigned short) (+(var_4)));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (1442374971920752727LL)));
                            }
                        } 
                    } 
                    var_20 = ((-7366382779390443146LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */long long int) arr_8 [i_0] [i_0 - 3] [4ULL] [i_1 + 3] [i_0] [i_0]))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)253)) >> (((((/* implicit */int) var_3)) + (74)))))), (((((/* implicit */_Bool) 3300030129635714244LL)) ? (((/* implicit */long long int) arr_15 [i_5])) : (var_8))))))));
            var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((unsigned short) var_7)))))) : ((+(arr_15 [i_5])))));
            arr_18 [i_6] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_6] [i_6 - 2] [i_6 - 2])), ((unsigned short)32101))))));
            var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((int) (+(var_9))))), (((((/* implicit */_Bool) -4680287153500097846LL)) ? (167075473U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32)))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_13 [i_5])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 109084013U)) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)34)))))));
            arr_21 [i_5] = ((/* implicit */unsigned short) min((6U), (((/* implicit */unsigned int) ((short) 4127891823U)))));
        }
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            var_27 = ((/* implicit */_Bool) var_10);
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))), (var_10)))) ? (var_2) : (((min((var_11), (((/* implicit */long long int) arr_19 [i_8])))) & (((long long int) var_15))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        {
                            arr_33 [i_10] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 14729801625328888993ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -511572735)))))) ? (((((/* implicit */_Bool) ((short) (short)1))) ? (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((arr_26 [i_11] [i_10] [i_8] [i_5]) ? (((/* implicit */int) var_13)) : (2144338552)))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_17 [i_5] [i_9] [i_11])) ? (var_4) : (((/* implicit */int) arr_16 [i_11] [i_5] [i_5])))) / (((/* implicit */int) var_15)))))));
                            var_29 -= ((/* implicit */long long int) 14U);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 4127891834U)) > (var_10))))))) ? (max(((-(20ULL))), (((/* implicit */unsigned long long int) (short)29940)))) : (((/* implicit */unsigned long long int) arr_13 [i_5]))));
                /* LoopSeq 3 */
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    var_31 = ((/* implicit */unsigned short) 207225);
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1128482805)) ? (arr_15 [i_13]) : (arr_15 [i_13])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 5991634629171136306LL)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_12] [i_13]))) / (var_8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (signed char)-7))))))))));
                    var_33 = ((/* implicit */unsigned char) (~(563757926U)));
                    var_34 = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) var_3)))));
                }
                /* vectorizable */
                for (short i_14 = 1; i_14 < 11; i_14 += 4) 
                {
                    arr_42 [i_12] = ((/* implicit */signed char) var_6);
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned char) var_11);
                        var_36 *= ((/* implicit */_Bool) (+((~(var_2)))));
                        var_37 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) != (((/* implicit */int) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) << (((var_9) - (7936276527216863862LL)))))) : (var_11)));
                        var_38 = ((/* implicit */unsigned int) ((int) (signed char)-35));
                        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) 563757934U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-13332)))) : (((((/* implicit */_Bool) 4294967295U)) ? (arr_44 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : (4294967295U))))))));
                    }
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (3145728U)))) ? (((/* implicit */int) arr_14 [i_5] [i_8])) : (((((/* implicit */_Bool) 566558367)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)73))))));
                    arr_45 [i_5] [i_5] [i_8] [i_12] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (var_6) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_8] [i_8] [i_8])))))));
                }
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_0))) / (var_4)))) ? (var_10) : (((/* implicit */unsigned long long int) 566558390))));
                    var_42 = ((/* implicit */_Bool) var_0);
                    var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) 847718166U)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (short)-28430)))) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))));
                }
                var_44 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_40 [i_8] [i_12])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) << (((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_5)))) - (65464)))))) / (max((((/* implicit */long long int) ((4294967295U) / (4294967295U)))), (((((/* implicit */_Bool) var_2)) ? (1442374971920752739LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                arr_48 [i_5] [i_5] [i_8] [i_12] = ((/* implicit */int) (+((+(9223372036854775807LL)))));
                var_45 = ((/* implicit */signed char) (~(4294967295U)));
            }
        }
        var_46 ^= max(((~(arr_46 [i_5] [i_5] [i_5] [i_5]))), (((/* implicit */long long int) arr_26 [i_5] [i_5] [i_5] [i_5])));
    }
    for (unsigned char i_17 = 0; i_17 < 20; i_17 += 3) 
    {
        arr_52 [i_17] |= ((/* implicit */unsigned long long int) max((2097151LL), (((/* implicit */long long int) (_Bool)1))));
        var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (unsigned char)232)), (var_11))) & (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? ((~(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -1130000501))))));
        var_48 = ((/* implicit */long long int) max((var_48), (((((/* implicit */_Bool) var_3)) ? (((long long int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
}
