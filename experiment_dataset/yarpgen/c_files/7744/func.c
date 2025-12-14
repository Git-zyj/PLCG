/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7744
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
    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)137))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                var_17 = arr_4 [i_2 - 1];
                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_0 [i_2 + 1]), (arr_0 [i_2 + 1])))) + ((+(((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_2]))))));
                arr_12 [i_0] [i_2] [i_0] = ((((/* implicit */int) (unsigned char)136)) <= ((-(((((/* implicit */int) var_7)) >> (((/* implicit */int) (_Bool)1)))))));
            }
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                arr_16 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [(_Bool)1])))) % (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))));
                arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_20 [(_Bool)1] [(_Bool)0] [i_4] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4])) & (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [(unsigned char)8]))))) ? (((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(unsigned char)6])))) : ((-(((/* implicit */int) (unsigned char)144))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((max((arr_25 [i_0] [i_0] [i_1] [i_4] [i_5] [i_6]), (arr_25 [i_0] [i_6] [i_4] [i_6] [i_6] [i_6]))) ? (((/* implicit */int) (!(arr_25 [i_4] [i_1] [i_4] [i_6] [i_1] [i_6])))) : (((arr_25 [i_5] [i_1] [i_5] [i_5] [i_4] [i_6]) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_4] [i_5] [i_5] [i_6]))))));
                            arr_26 [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ ((+(((/* implicit */int) (unsigned char)226))))));
                            arr_27 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) min(((unsigned char)102), (((/* implicit */unsigned char) ((_Bool) (_Bool)1)))))) : ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_6])) : (((/* implicit */int) arr_10 [i_0] [(unsigned char)3] [i_4] [i_6]))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_32 [i_7] [(_Bool)1] [(_Bool)1] [i_4] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_0])))));
                    arr_33 [i_7] [i_1] [i_0] [(unsigned char)6] [(unsigned char)6] [i_4] = (_Bool)1;
                    var_20 = arr_0 [i_1];
                    var_21 = ((((/* implicit */int) ((unsigned char) arr_7 [i_4]))) >= (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0])));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) arr_18 [i_8] [i_0] [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0])))))));
                    var_23 ^= ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                    arr_36 [i_8] = ((unsigned char) (unsigned char)163);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_39 [i_0] [i_4] [i_1] [(unsigned char)10] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)125)) + (((/* implicit */int) arr_31 [i_0] [i_9]))))) ? (((/* implicit */int) arr_37 [i_9] [i_9] [i_9])) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_4 [i_0])))))) >> (((/* implicit */int) (_Bool)1))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_22 [(_Bool)1] [(_Bool)1] [i_9]), (arr_22 [i_0] [i_0] [i_9])))) ? (((((/* implicit */_Bool) arr_22 [(unsigned char)8] [i_1] [i_1])) ? (((/* implicit */int) arr_22 [i_9] [i_0] [i_0])) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_22 [i_9] [i_4] [i_0])) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_4]))))));
                    arr_40 [i_0] [i_0] [i_0] = ((unsigned char) arr_4 [i_9]);
                }
                arr_41 [i_4] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_0] [(_Bool)1] [(_Bool)1] [i_0])) & (((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (unsigned char)238))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_0] [i_1] [(_Bool)1] [i_4]))))))));
            }
            /* LoopNest 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    {
                        arr_48 [i_11] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_10 - 1])) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0])) < (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) arr_30 [i_0] [i_1] [i_10 - 1] [i_11]))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)235)))))));
                        var_26 = arr_34 [i_0] [i_0] [i_0] [i_11] [i_0] [i_0];
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            arr_51 [i_0] [(_Bool)1] [i_12] = ((/* implicit */_Bool) ((unsigned char) arr_44 [i_0]));
            var_27 = ((min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)12)))), (((/* implicit */int) (_Bool)1)))) >= (max(((+(((/* implicit */int) arr_42 [i_0])))), (((/* implicit */int) ((unsigned char) (_Bool)1))))));
            var_28 = ((/* implicit */_Bool) max((var_28), (((((/* implicit */int) arr_49 [i_0] [i_12] [i_0])) <= ((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_12] [i_12]))))))));
        }
        var_29 = arr_25 [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [(_Bool)1];
    }
    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
    {
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_53 [i_13])) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_52 [i_13]), (((/* implicit */unsigned char) arr_53 [i_13]))))))))));
        arr_54 [i_13] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_52 [i_13])))) | (((/* implicit */int) ((_Bool) arr_53 [i_13])))));
        var_31 = arr_52 [i_13];
    }
    var_32 = ((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
}
