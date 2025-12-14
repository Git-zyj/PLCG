/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70360
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_14 = (+(((((/* implicit */_Bool) 3787070701U)) ? (var_0) : (1333425462U))));
        arr_2 [i_0] = min((var_4), (var_7));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_3] = arr_6 [i_1];
                    var_15 = ((/* implicit */unsigned int) max((var_15), ((~(min((349537769U), (4193280U)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_16 = var_1;
                        var_17 = min(((~(arr_9 [i_1] [i_1] [i_1]))), (var_0));
                    }
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_18 = var_8;
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            arr_19 [i_1] [i_1] [i_3] [12U] [6U] [i_1] = arr_11 [i_1] [i_5] [4U] [i_1];
                            var_19 += ((((/* implicit */_Bool) arr_14 [i_6] [i_5])) ? (arr_10 [i_1] [i_2] [4U]) : (((((/* implicit */_Bool) var_0)) ? (arr_4 [i_2]) : (arr_3 [i_1]))));
                        }
                        var_20 = arr_10 [i_1] [i_3] [i_3];
                    }
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (min((arr_8 [i_2]), (var_2)))));
                        arr_22 [i_1] = arr_13 [i_1] [i_1] [i_3] [6U];
                    }
                }
            } 
        } 
        arr_23 [i_1] = var_2;
        var_22 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((var_11), (arr_20 [i_1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))))))));
    }
    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) max((var_23), ((+(arr_25 [14U])))));
        var_24 = var_8;
    }
    var_25 += var_6;
    var_26 = var_5;
    var_27 = (+(var_1));
}
