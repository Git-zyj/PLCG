/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78990
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
    var_16 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (_Bool)1))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), ((unsigned short)12)))) || (((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = arr_4 [i_1] [i_1];
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    arr_14 [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) (-(((arr_11 [i_2] [i_2] [i_2] [i_1]) ? (((((/* implicit */int) arr_8 [i_1] [i_2] [i_1])) * (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) var_7))))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (var_11)));
                    arr_15 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) var_12);
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_4]))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_26 [i_4] [i_5] [i_6] [i_7] [i_7] [i_7]))))) && (arr_24 [i_8] [i_7] [i_5] [i_4])))) / (((arr_19 [i_4]) ? (((/* implicit */int) min(((unsigned short)34477), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)35)))))))))));
                                arr_31 [i_4] [i_4] [i_4] [i_7] = ((/* implicit */unsigned short) ((min(((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))), ((+(((/* implicit */int) (unsigned short)65535)))))) + (((((/* implicit */_Bool) arr_29 [i_8] [i_7] [i_7] [i_5] [i_4])) ? (((/* implicit */int) arr_16 [i_4])) : ((-(((/* implicit */int) (_Bool)1))))))));
                                arr_32 [(_Bool)1] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_14)))), (((/* implicit */int) var_15))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((_Bool) ((((/* implicit */int) (unsigned short)255)) / (((/* implicit */int) (unsigned short)61116)))))));
                            }
                        } 
                    } 
                    arr_33 [i_6] = ((/* implicit */unsigned short) var_0);
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_39 [i_4] [i_4] [i_4] [i_4] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) min((arr_22 [i_6] [i_6]), ((unsigned short)11738)))) : (((((/* implicit */_Bool) arr_26 [i_4] [i_10 - 1] [i_9] [i_9] [(_Bool)1] [(unsigned short)4])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) (unsigned short)6))))))) ? (max((((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_9] [i_6] [i_4] [i_10])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_19 [i_10 - 1])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_10 - 1])), ((unsigned short)65281))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)2730), ((unsigned short)17303)))) & (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) arr_34 [i_5] [i_5]))))));
                            }
                        } 
                    } 
                    arr_40 [i_6] [(unsigned short)16] = (!((_Bool)0));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        var_22 = var_3;
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_30 [i_11] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1])))))));
    }
    var_24 = (_Bool)1;
}
