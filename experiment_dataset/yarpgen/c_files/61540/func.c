/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61540
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
    var_17 |= ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) min(((unsigned short)37978), ((unsigned short)37990)));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_7))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((arr_0 [i_1]) ? (((/* implicit */unsigned int) max((var_14), (((/* implicit */int) arr_3 [i_1] [i_1]))))) : (((((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7425))))) >> ((((~(((/* implicit */int) arr_1 [i_1] [i_1])))) + (16069))))))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        arr_13 [i_4] [i_3] [i_2] [i_2] [5] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_10 [i_1] [i_2] [i_3])))) < (((/* implicit */int) max((arr_9 [i_1] [i_2] [i_3] [i_4]), (arr_9 [i_1] [(unsigned short)11] [i_3] [i_4]))))));
                        arr_14 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_3] [i_3] [i_1]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_7))));
                                arr_25 [i_1] [i_8] |= ((/* implicit */int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_24 [i_1] [i_6] [i_6] [i_7] [i_8] [i_5] [i_7]))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_6] [9]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18939)) ? (var_14) : (var_13)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_5]))) : (var_10))) : (((arr_10 [10] [10] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8] [i_7] [i_6] [i_7] [i_7] [11] [i_1]))) : (var_1)))))));
                                var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_1])) >> (((((/* implicit */int) arr_21 [i_1])) - (5207))))))));
                                var_22 *= var_0;
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        arr_30 [i_5] [14] [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_6))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_3)) > ((~(3517694964U))))))));
                        var_23 *= ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_16 [i_5] [i_5])))) != (((/* implicit */int) min((arr_26 [i_9]), (((/* implicit */unsigned short) arr_4 [i_9] [i_1]))))))) ? (((/* implicit */int) arr_10 [i_1] [i_5] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7408)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65335))))))))));
                    }
                    for (int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        arr_33 [i_10] [i_10] [i_6] [i_10] [(unsigned short)15] [i_10] = ((/* implicit */_Bool) ((min((var_5), (((/* implicit */unsigned int) arr_4 [i_10] [i_6])))) >> (((/* implicit */int) min((arr_4 [i_10] [i_5]), (arr_4 [i_1] [i_5]))))));
                        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(max((var_10), (((/* implicit */unsigned int) (-2147483647 - 1))))))))));
                        arr_34 [2U] [2U] [i_10] [(_Bool)0] = max((var_13), (((/* implicit */int) arr_21 [i_1])));
                        var_25 = max((max((((/* implicit */int) var_4)), (arr_32 [i_1]))), (((/* implicit */int) var_16)));
                        arr_35 [i_10] [i_5] [i_6] [i_10] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_9)) ? (arr_12 [i_1] [i_1] [i_6] [14] [i_10]) : ((+(var_11))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (_Bool)0))))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)7408)))))))));
                    }
                    var_26 = var_8;
                    arr_36 [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_5] [i_5] [(_Bool)1] [i_5] [(_Bool)1])) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_21 [i_1])) ? (((/* implicit */int) arr_22 [(unsigned short)15] [(unsigned short)15] [i_1])) : (((/* implicit */int) arr_17 [i_1] [i_5]))))))), ((~(min((var_5), (arr_29 [15] [i_5] [i_5] [i_5] [i_5] [(_Bool)1])))))));
                    var_27 = ((/* implicit */int) (((+(var_6))) <= (((/* implicit */unsigned int) (((~(arr_32 [i_1]))) << (((((arr_32 [i_5]) + (1686675498))) - (26))))))));
                }
            } 
        } 
        arr_37 [i_1] [(unsigned short)12] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) arr_23 [i_1])), (((((/* implicit */int) arr_18 [7U] [7U] [7U] [i_1])) / (((/* implicit */int) (unsigned short)65534))))))), (((arr_18 [i_1] [i_1] [(_Bool)1] [i_1]) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
    }
}
