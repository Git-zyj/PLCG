/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6664
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 0U)), (((7ULL) - (((/* implicit */unsigned long long int) -499509081968720047LL))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 3; i_2 < 12; i_2 += 4) /* same iter space */
            {
                var_15 = ((/* implicit */_Bool) arr_3 [i_0]);
                var_16 = ((/* implicit */int) 15LL);
            }
            /* vectorizable */
            for (short i_3 = 3; i_3 < 12; i_3 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */_Bool) var_5);
                arr_13 [i_3] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) arr_0 [i_0 - 1]));
            }
            /* LoopSeq 2 */
            for (short i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                var_18 += ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_7 [i_0 + 1] [i_4 - 1])), (-499509081968720037LL))) << (((((((/* implicit */_Bool) var_8)) ? (arr_6 [i_4 + 1]) : (((/* implicit */unsigned long long int) -17LL)))) - (7497796819463894856ULL)))));
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-15LL) : (((/* implicit */long long int) var_2))))) ? (((long long int) arr_11 [2U] [13] [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1]))))) << (((((/* implicit */_Bool) max((arr_14 [i_1]), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_15 [3] [(_Bool)1]))))) : (min((((/* implicit */long long int) (unsigned char)26)), (15LL)))))));
            }
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_20 = ((unsigned short) ((unsigned char) arr_16 [i_5] [i_1] [i_5] [i_0]));
                arr_20 [i_0] [i_0] [i_5] = ((/* implicit */int) var_1);
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 3) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) (_Bool)1)), (15LL)));
                            var_22 = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (1226104196723497097ULL))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((((unsigned long long int) arr_24 [i_0 + 1] [i_1] [i_6])), (((/* implicit */unsigned long long int) -15LL)))))));
                            arr_26 [i_5] [i_0] [i_5] [(_Bool)1] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 1]))) == (1061692742U))))) & (((((/* implicit */_Bool) arr_24 [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (arr_24 [i_0 + 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) var_2))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) (-((~(-13LL)))));
            }
            var_25 += ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_33 [i_0] [i_0] [i_9] = ((/* implicit */long long int) var_10);
                var_26 = ((((var_0) + (9223372036854775807LL))) << (((var_11) - (166884185))));
                var_27 = ((/* implicit */_Bool) var_3);
                var_28 = (((_Bool)1) ? (-7296340446240367110LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))));
            }
            arr_34 [i_8] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) >> (((/* implicit */int) ((_Bool) 0U)))));
        }
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            var_29 ^= ((/* implicit */unsigned int) ((((arr_16 [(unsigned short)2] [i_0 - 1] [i_0 + 1] [i_0 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 - 1] [10LL]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_16 [12LL] [12LL] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 + 1] [6]))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                var_30 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_18 [0] [i_0])) : (((/* implicit */int) var_1)))));
                arr_40 [6] [i_0] [5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 9557989257746696761ULL))) - (((/* implicit */int) ((signed char) arr_37 [(unsigned short)5] [i_0 - 1] [i_0])))));
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    var_31 = ((/* implicit */int) 856389862U);
                    /* LoopSeq 2 */
                    for (short i_13 = 2; i_13 < 12; i_13 += 4) 
                    {
                        arr_46 [i_0 - 1] [i_10] [10U] [i_12] [i_13 - 2] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 129385595)) ? (((/* implicit */unsigned int) 1647819083)) : (1911147194U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_10] [i_0 - 1])))))) : (((((unsigned int) var_12)) / (max((1874399043U), (((/* implicit */unsigned int) (short)29894))))))));
                        arr_47 [i_0 + 1] [5LL] [i_11] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (min((arr_4 [5]), (((/* implicit */long long int) var_9))))))) ? (((/* implicit */long long int) max((var_2), (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_36 [i_11])))))))) : (min((((/* implicit */long long int) var_6)), (var_0)))));
                        var_32 = ((/* implicit */_Bool) max((var_32), (((_Bool) ((((/* implicit */long long int) ((int) -640416203))) / (var_0))))));
                        var_33 = ((/* implicit */signed char) var_8);
                    }
                    for (unsigned int i_14 = 4; i_14 < 10; i_14 += 2) 
                    {
                        var_34 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 999182356U)) != (33LL)))), (((((/* implicit */_Bool) var_3)) ? (arr_22 [i_0] [i_10] [(signed char)13] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */int) (short)24752)) : (((/* implicit */int) var_12))));
                        var_35 -= ((/* implicit */unsigned int) -634636076);
                        var_36 ^= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_42 [i_14 - 1]))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        var_37 = ((/* implicit */short) (((~(2LL))) & (((8LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)29)))))));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((((/* implicit */int) arr_30 [i_0 - 1] [i_0] [i_0] [i_0 + 1])) < (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned int) max((var_11), (((/* implicit */int) arr_17 [i_0 + 1] [i_15]))))) : (((unsigned int) ((((/* implicit */_Bool) 4179878256U)) ? (var_5) : (((/* implicit */int) var_6))))))))));
                    }
                    for (int i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        arr_57 [9U] [10] [i_11] [i_16] [i_16] = ((/* implicit */_Bool) max((((long long int) (short)32765)), (((((/* implicit */_Bool) var_2)) ? (((12LL) << (((var_0) + (55834759687999249LL))))) : (var_0)))));
                        arr_58 [i_16] [i_16] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_10])) - (((int) var_4))));
                        arr_59 [i_0] [i_16] [i_12] [9] = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) arr_17 [i_0 - 1] [i_16])), (min((arr_22 [1] [1] [i_11] [i_16]), (((/* implicit */unsigned long long int) var_3)))))));
                    }
                }
            }
            arr_60 [i_10] = ((/* implicit */unsigned char) var_2);
        }
    }
    var_39 = ((/* implicit */unsigned long long int) var_3);
    var_40 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) var_7))))))));
}
