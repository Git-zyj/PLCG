/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57415
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
    var_12 += ((/* implicit */int) ((((((unsigned int) var_2)) - (((/* implicit */unsigned int) min((var_4), (var_6)))))) ^ (max((((3723481678U) ^ (1227049419U))), (((unsigned int) var_0))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((int) arr_4 [20] [i_1])))));
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                var_14 = ((arr_5 [i_1] [i_2] [i_2]) & (arr_5 [i_1] [i_2] [i_2 - 2]));
                var_15 = ((/* implicit */int) arr_3 [18U]);
            }
        }
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((2635334683U) & (((((/* implicit */_Bool) max((4131258333U), (1U)))) ? (min((((/* implicit */unsigned int) var_0)), (var_7))) : (((/* implicit */unsigned int) arr_0 [i_0])))))))));
        var_17 = ((unsigned int) -1484665079);
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned int) ((int) ((int) ((-1484665068) | (-1484665079)))));
        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1484665077)) - (var_5)))) ? (1486437025U) : (max((((/* implicit */unsigned int) 931327371)), (var_11))))) != (((unsigned int) 1659632613U))));
    }
    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */int) ((arr_2 [i_4]) < (((/* implicit */unsigned int) var_9))));
        arr_11 [i_4] = ((/* implicit */int) arr_5 [20] [20] [i_4 + 1]);
        arr_12 [i_4] = arr_0 [i_4];
        var_21 = ((/* implicit */int) 2793007210U);
    }
    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
    {
        arr_17 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) arr_6 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 2]))) < (((((/* implicit */unsigned int) -366926493)) ^ (((((/* implicit */_Bool) 1231392500U)) ? (4294967289U) : (4294967295U)))))));
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            arr_20 [i_6] = ((/* implicit */int) var_1);
            arr_21 [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) ((arr_14 [i_5 - 1] [i_6]) & (62914560U))))) - (arr_4 [i_5] [i_5])));
        }
        /* vectorizable */
        for (unsigned int i_7 = 1; i_7 < 23; i_7 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    for (unsigned int i_10 = 3; i_10 < 20; i_10 += 2) 
                    {
                        {
                            var_22 = ((unsigned int) arr_31 [i_10] [i_10] [i_7 + 1] [i_7 + 1] [i_7 + 1] [22]);
                            arr_33 [i_5 + 2] [i_7] [i_10] [i_9] [i_10] = var_3;
                            arr_34 [i_7] [i_7 - 1] [i_7] [10U] [i_7] = ((/* implicit */unsigned int) ((arr_16 [i_7 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_9)) != (var_2)))))));
                        }
                    } 
                } 
                arr_35 [i_5] [i_5] [i_8] [i_7] = arr_32 [i_8];
            }
            for (unsigned int i_11 = 2; i_11 < 23; i_11 += 2) 
            {
                var_23 = var_3;
                var_24 = ((var_1) | (1884664946U));
                var_25 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_1 [i_5 + 2])) < (((unsigned int) arr_30 [i_11] [i_7]))));
                var_26 = ((/* implicit */int) max((var_26), ((+(((int) 15872))))));
            }
            var_27 = ((/* implicit */unsigned int) arr_19 [4]);
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                var_28 = ((/* implicit */unsigned int) min((var_28), (603165422U)));
                arr_41 [i_5] [i_5] [i_7] [i_5 + 1] = ((/* implicit */int) ((arr_39 [i_5 + 2] [i_7] [i_5 + 3] [i_7 + 1]) > (arr_26 [i_7] [i_7] [i_5 + 1])));
            }
            /* LoopSeq 2 */
            for (unsigned int i_13 = 1; i_13 < 22; i_13 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_14 = 1; i_14 < 22; i_14 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_15 = 1; i_15 < 23; i_15 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) ((((arr_40 [i_7] [i_7]) - (arr_29 [i_5] [i_7] [i_13]))) - (((var_8) | (var_2)))));
                        var_30 = ((/* implicit */unsigned int) 840877256);
                        var_31 = ((arr_26 [i_5] [i_7] [i_7]) - (((/* implicit */int) ((1227049421U) != (((/* implicit */unsigned int) var_3))))));
                    }
                    for (unsigned int i_16 = 1; i_16 < 23; i_16 += 1) /* same iter space */
                    {
                        arr_54 [i_5 - 1] [i_7] [i_7] [i_13] [i_14 + 2] [i_14 + 2] [i_16 + 1] = arr_37 [i_5] [i_7] [9U] [i_14];
                        var_32 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_7 + 1] [i_5])) ? (((unsigned int) arr_13 [i_5 + 1] [i_7])) : (((/* implicit */unsigned int) var_10))));
                    }
                    for (unsigned int i_17 = 1; i_17 < 23; i_17 += 1) /* same iter space */
                    {
                        arr_58 [i_17] [i_7] [i_14 - 1] [i_13 + 2] [i_7] [i_7] [i_5] = ((/* implicit */int) ((arr_48 [i_7] [i_5 + 3]) ^ (((/* implicit */unsigned int) var_6))));
                        var_33 = ((/* implicit */unsigned int) (-((~(1217569873)))));
                        arr_59 [i_5] [i_5 + 1] [i_5] [i_7] [i_5] = 1217569873;
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) var_9))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        arr_62 [i_5 + 3] [i_7] = ((/* implicit */int) var_2);
                        var_35 += ((/* implicit */int) ((unsigned int) ((1227049419U) != (arr_48 [16] [i_7]))));
                    }
                    var_36 ^= (((-(var_9))) ^ (((int) 1835412371)));
                    var_37 = var_7;
                    var_38 = ((/* implicit */unsigned int) arr_26 [i_5] [i_13 + 1] [i_14 - 1]);
                }
                for (int i_19 = 0; i_19 < 24; i_19 += 1) 
                {
                    var_39 = ((/* implicit */unsigned int) var_0);
                    /* LoopSeq 1 */
                    for (int i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        var_40 ^= ((((var_8) | (((/* implicit */unsigned int) 1037974351)))) % (var_8));
                        arr_68 [i_5] [i_7] [i_13] [i_7] [i_20] [i_7] = ((/* implicit */int) 1735044177U);
                    }
                    var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_5 + 1] [18])) && (((/* implicit */_Bool) -840877257)))))));
                    var_42 = ((/* implicit */unsigned int) var_0);
                }
                for (unsigned int i_21 = 0; i_21 < 24; i_21 += 2) 
                {
                    var_43 = ((((/* implicit */_Bool) ((unsigned int) arr_60 [i_5] [i_5] [i_7]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) > (arr_65 [i_7] [i_7 + 1] [13U] [i_21] [i_7]))))) : (((var_1) & (var_11))));
                    var_44 = ((/* implicit */int) ((((unsigned int) var_7)) != (((853730565U) - (((/* implicit */unsigned int) -1643548136))))));
                    /* LoopSeq 1 */
                    for (int i_22 = 1; i_22 < 22; i_22 += 1) 
                    {
                        arr_74 [i_7] [i_21] [i_13] [i_7 - 1] [i_7] = ((/* implicit */int) 1U);
                        var_45 += ((/* implicit */unsigned int) ((arr_26 [21U] [19] [i_21]) - (1718751319)));
                    }
                    /* LoopSeq 1 */
                    for (int i_23 = 0; i_23 < 24; i_23 += 1) 
                    {
                        var_46 = var_6;
                        var_47 = ((/* implicit */unsigned int) 1217569883);
                        var_48 = ((/* implicit */int) ((((/* implicit */unsigned int) -786328538)) | (3849259767U)));
                        var_49 *= ((/* implicit */unsigned int) 1496739177);
                    }
                    arr_77 [i_7] [i_7 + 1] [14U] [i_13 - 1] = ((/* implicit */unsigned int) -16);
                }
                var_50 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_11) > (3067917870U)))) - (-931327358)));
            }
            for (int i_24 = 0; i_24 < 24; i_24 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_25 = 1; i_25 < 21; i_25 += 2) 
                {
                    var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3849259767U)) ? (((int) 3544820466U)) : (1496739177)));
                    var_52 ^= -1496739178;
                    arr_83 [i_5] [i_7] [i_24] [i_7] [i_25] [i_5] = ((int) 840877255);
                    arr_84 [i_7] = ((/* implicit */int) var_2);
                }
                arr_85 [i_7] = ((((2U) ^ (((/* implicit */unsigned int) var_0)))) * (((/* implicit */unsigned int) (-(var_10)))));
                arr_86 [i_7] [21U] [i_7] [i_7] = ((/* implicit */unsigned int) var_9);
                arr_87 [i_7] [i_7] = arr_61 [i_24] [i_7] [23U] [i_7] [i_7] [i_7] [i_5 + 3];
            }
        }
        var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) var_7))));
    }
}
