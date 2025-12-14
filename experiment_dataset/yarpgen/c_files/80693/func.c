/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80693
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 += ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_1 [i_0]) ? (((arr_1 [(_Bool)1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) : ((+(((/* implicit */int) var_9)))))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_11 = arr_2 [i_0] [i_0];
            var_12 = ((/* implicit */short) arr_1 [(_Bool)1]);
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_13 = ((/* implicit */short) ((((((/* implicit */int) max((arr_5 [i_2] [i_1] [i_2] [(_Bool)1]), (arr_0 [i_0] [i_1])))) * (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) > (((/* implicit */int) arr_1 [i_0]))))))) * (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_2]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_11 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2 + 1] [i_0] [i_4]);
                        arr_12 [i_0] [(short)2] [i_1] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3 - 1] [i_2] [i_2 + 1] [(short)2]);
                    }
                    var_14 += ((/* implicit */_Bool) arr_4 [(_Bool)1] [(short)4] [i_0]);
                    arr_13 [i_0] [i_2] [i_0] [i_0] = (short)(-32767 - 1);
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */short) (_Bool)1);
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(max(((-(((/* implicit */int) arr_0 [(_Bool)1] [i_5 - 1])))), (((arr_16 [(short)8]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = max((((/* implicit */short) ((_Bool) (short)25680))), (min((arr_17 [i_2 + 1] [i_0] [i_5 - 1] [i_5] [i_6] [i_6] [i_6]), (arr_17 [i_2 + 1] [i_0] [i_5 - 1] [(_Bool)1] [i_5] [i_5] [i_6]))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_0))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (max(((!(((/* implicit */_Bool) arr_18 [i_1] [i_2 + 1] [i_5] [i_5 - 1] [(short)8] [i_5 - 1])))), ((!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_6] [i_6])) + (((/* implicit */int) var_3)))))))))));
                        arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((arr_0 [i_0] [i_5 - 1]), (var_9)))) * (((/* implicit */int) (!(arr_14 [i_6] [i_0] [i_6] [i_0] [i_5 - 1]))))));
                    }
                    for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_1 [i_2 + 1]))))) ? (((/* implicit */int) arr_0 [i_0] [i_2 + 1])) : (((/* implicit */int) (!(arr_1 [i_2 + 1]))))));
                        arr_23 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) var_4)))));
                        var_20 = ((/* implicit */short) arr_15 [i_0] [i_1] [i_2]);
                    }
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [(short)6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_17 [i_0] [i_0] [(_Bool)1] [(short)10] [i_0] [i_2] [i_8])) * (((/* implicit */int) var_3)))), (((/* implicit */int) max((var_6), (arr_1 [i_0]))))))) ? ((-(((/* implicit */int) ((_Bool) arr_24 [i_0] [i_0] [i_1] [(_Bool)1] [i_8 - 1]))))) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0] [i_1]))));
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) var_8)) + (((/* implicit */int) var_8)))))))));
                }
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((((((/* implicit */int) (short)-5386)) - (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((_Bool) arr_1 [i_10 - 1])))))));
                    arr_33 [(short)2] &= ((/* implicit */short) (_Bool)1);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_23 = arr_14 [i_0] [i_1] [i_1] [i_0] [i_1];
                    arr_36 [i_0] [i_0] [i_9] [i_11] [i_0] [i_0] = arr_21 [i_0] [i_0] [i_1] [i_0] [i_9] [i_11];
                    arr_37 [i_0] [(short)2] [i_9] [i_11] = arr_31 [i_0] [i_1];
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_41 [i_0] [i_1] [i_9] [i_12] = ((/* implicit */short) (-(((/* implicit */int) arr_35 [i_0] [i_1] [i_9] [i_12]))));
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-15617))));
                        arr_44 [i_0] [i_1] [i_9] [i_12] [i_13 + 1] = ((/* implicit */short) arr_30 [i_0]);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_0 [(_Bool)0] [i_1]))) - ((+(((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_9] [i_12] [i_14])))))))));
                        var_26 = ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_0)))))));
                        var_27 = (!(((/* implicit */_Bool) arr_18 [i_14] [i_0] [i_9] [i_9] [i_0] [i_0])));
                    }
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        arr_50 [i_0] = ((/* implicit */_Bool) var_0);
                        arr_51 [(short)8] [i_0] [i_9] [i_15] [i_15] [i_15] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_18 [i_12] [i_15] [(_Bool)1] [i_15 + 1] [i_0] [i_15 + 1])))) * ((-(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [(_Bool)1])) >= (((/* implicit */int) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                    }
                    var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_1), (arr_18 [i_0] [i_1] [i_0] [i_9] [i_0] [i_12])))) ? (((/* implicit */int) (!(var_6)))) : ((-(((/* implicit */int) (short)511)))))) > (((/* implicit */int) ((short) arr_42 [i_0] [i_1] [i_12])))));
                    var_29 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) arr_29 [i_0] [i_1] [i_9] [i_12]))));
                }
                var_30 = ((/* implicit */short) min((var_30), (max((((/* implicit */short) (!((!(var_6)))))), (min((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), (max((var_7), (var_3)))))))));
                var_31 ^= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-19937)) : (((/* implicit */int) (short)6))));
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_1)))))));
            }
            for (short i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) max((((_Bool) arr_10 [i_0] [(_Bool)1] [i_1] [i_1] [i_16])), (((_Bool) arr_10 [i_1] [(_Bool)1] [i_16] [i_0] [i_16])))))));
                arr_54 [i_0] [i_0] = ((/* implicit */short) arr_15 [(_Bool)1] [i_1] [i_0]);
            }
            for (short i_17 = 1; i_17 < 12; i_17 += 1) 
            {
                var_34 = min((((/* implicit */short) min((arr_10 [i_17 + 1] [i_17 + 1] [i_17] [i_0] [i_17]), (arr_40 [i_17 + 1] [i_17] [(short)10] [i_17 + 1] [i_17 + 1])))), (((short) var_1)));
                arr_57 [i_0] [i_0] [i_17] [i_0] = arr_10 [i_0] [i_0] [i_0] [i_0] [i_0];
            }
        }
        for (short i_18 = 3; i_18 < 11; i_18 += 1) 
        {
            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (_Bool)1))));
            var_36 &= ((/* implicit */_Bool) arr_56 [i_0] [(short)6]);
        }
        /* vectorizable */
        for (short i_19 = 1; i_19 < 12; i_19 += 4) 
        {
            arr_63 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_35 [i_0] [i_0] [i_19] [i_19]);
            arr_64 [i_19] [i_0] [i_19 - 1] = ((/* implicit */short) (-(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_19 + 1] [i_19]))));
            arr_65 [i_0] = ((short) arr_1 [i_19 + 1]);
        }
    }
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_37 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_66 [i_20]))));
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_23 = 1; i_23 < 15; i_23 += 1) 
                    {
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            {
                                arr_78 [i_20] [i_24] [i_22] [i_20] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) arr_73 [i_20] [i_23 + 3] [i_23 - 1] [i_20])) ? (((/* implicit */int) arr_77 [i_23 - 1] [i_23 - 1] [i_23] [i_23 - 1] [i_23 + 2] [i_23] [i_23 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_22] [(_Bool)1])))))));
                                arr_79 [i_20] [(short)12] [i_22] [i_20] [i_24] [i_24] [i_23] = ((/* implicit */_Bool) ((((/* implicit */int) arr_73 [i_20] [i_23 + 3] [i_22] [i_20])) + ((((_Bool)1) ? (((/* implicit */int) arr_69 [i_20] [i_20])) : (((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                    arr_80 [(_Bool)1] [i_20] [i_20] = var_6;
                }
            } 
        } 
        arr_81 [i_20] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_7)))))));
    }
    var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_3)))))));
    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) var_6))));
    var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) ((((_Bool) var_6)) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))));
}
