/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63098
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_13 |= ((/* implicit */unsigned short) arr_1 [(unsigned short)14]);
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((((/* implicit */int) arr_5 [i_0])) + (((/* implicit */int) var_9)))))))));
            var_15 = ((/* implicit */unsigned short) arr_3 [i_0]);
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_5 [i_1 + 1]))));
            var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) var_12))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned int) arr_5 [i_0 + 1]);
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_12)) << (((/* implicit */int) (signed char)0))))));
        var_18 = ((arr_9 [i_2]) << ((((~(1073741824U))) - (3221225458U))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        var_19 = (signed char)58;
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (signed char i_5 = 4; i_5 < 13; i_5 += 3) 
            {
                {
                    arr_20 [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (3264235406U))));
                    var_20 = ((/* implicit */unsigned short) ((unsigned int) 31U));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_16 [i_3] [i_6] [i_4]))) % (((/* implicit */int) arr_11 [i_5 - 1]))));
                        var_22 = ((/* implicit */signed char) (unsigned short)0);
                    }
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_23 -= ((/* implicit */unsigned int) var_3);
                        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_7])) ? (((/* implicit */int) arr_18 [i_7] [i_7] [i_7])) : (((/* implicit */int) (signed char)-1)))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) arr_0 [i_7]))));
                        arr_25 [i_5] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)24576))));
                        var_26 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2)))));
                    }
                    for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        arr_29 [i_3] [i_4] [i_3] [i_3] [i_3] [i_3] |= ((((/* implicit */_Bool) arr_11 [i_5 - 1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_5]))));
                        /* LoopSeq 4 */
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_3))));
                            arr_32 [i_4] [i_4] [i_5] [i_8] [i_5] [i_9] [i_9] = ((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? ((-(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_8] [i_9]))) <= (130048U))))));
                        }
                        for (unsigned short i_10 = 1; i_10 < 14; i_10 += 1) 
                        {
                            arr_36 [i_3] [i_4] [i_4] [i_5] [i_8] [i_8] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3 + 2])) ? (((/* implicit */int) arr_8 [i_10 + 1])) : (((/* implicit */int) (signed char)127))));
                            var_28 = arr_30 [i_10 + 1] [i_8] [i_8] [i_3 - 1];
                        }
                        for (signed char i_11 = 1; i_11 < 11; i_11 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_5] [i_8] [i_11])) ? ((-(((/* implicit */int) (signed char)-48)))) : (((/* implicit */int) (unsigned short)0))));
                            var_30 &= ((/* implicit */unsigned short) ((3U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_3 + 1] [i_3 + 1] [i_4] [i_8] [i_8 + 1])))));
                        }
                        for (unsigned short i_12 = 1; i_12 < 11; i_12 += 1) 
                        {
                            arr_42 [i_8] [i_8] [i_8] [i_8] [i_12] = arr_31 [i_8] [i_8] [i_8] [i_4] [i_3];
                            arr_43 [i_8] = ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((/* implicit */_Bool) 0U)) ? (arr_22 [i_5] [i_4] [i_5]) : (217340541U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                        }
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((signed char) var_9)))));
                        var_32 = ((/* implicit */unsigned short) ((signed char) arr_16 [i_4] [i_4] [i_5 - 3]));
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_3]))))) % (((/* implicit */int) arr_0 [i_13])))))));
            var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_33 [i_3 + 2] [i_13] [i_13] [i_3] [i_3 + 1] [i_13] [i_3]))));
            /* LoopNest 3 */
            for (signed char i_14 = 1; i_14 < 12; i_14 += 2) 
            {
                for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) arr_33 [i_3] [i_16] [i_14] [i_15] [i_14 + 2] [i_14] [i_13])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))));
                            arr_55 [i_3] [i_3] [i_13] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_14] [i_14] [i_14] [i_14] [i_14 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_41 [i_14] [i_14] [i_14] [i_14] [i_14 + 3])));
                        }
                    } 
                } 
            } 
            var_36 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56605))) * (1273834112U)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_7))) : (arr_15 [i_13] [i_13]));
        }
        for (signed char i_17 = 2; i_17 < 14; i_17 += 2) 
        {
            arr_58 [i_3] [i_17] [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_17 + 1] [i_17 - 1] [i_17 - 2]))));
            arr_59 [i_3] [i_17] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_17])) ? (arr_49 [i_3] [i_3] [i_3] [i_3 + 1]) : (var_7)));
            var_37 = ((/* implicit */unsigned short) arr_53 [i_3] [i_17]);
            arr_60 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)5))));
            var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (signed char)110)))))));
        }
        for (signed char i_18 = 1; i_18 < 13; i_18 += 1) 
        {
            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65532))))) ? (((((/* implicit */_Bool) arr_63 [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_15 [i_3] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-16)))))));
            var_40 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_57 [i_3] [i_18] [i_18])) ? (var_7) : (291443655U))));
            var_41 -= ((((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)4]))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_28 [i_3] [i_18] [i_18] [i_3])))));
        }
        arr_64 [i_3] = var_12;
    }
    var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) (signed char)3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))), (((var_2) - (1048575U))))), (max((((/* implicit */unsigned int) var_0)), (min((var_8), (0U))))))))));
    /* LoopNest 2 */
    for (unsigned short i_19 = 2; i_19 < 8; i_19 += 2) 
    {
        for (signed char i_20 = 0; i_20 < 12; i_20 += 1) 
        {
            {
                var_43 = min((((/* implicit */unsigned int) arr_19 [i_19] [i_19] [i_19] [i_19])), (arr_39 [i_19] [i_19] [i_19] [i_19] [i_19 + 2] [i_19] [i_19 + 4]));
                var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_19] [i_19] [i_20]))) - (0U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-118)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12033)))));
            }
        } 
    } 
}
