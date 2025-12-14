/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88586
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
    var_10 = ((/* implicit */short) 385464629U);
    var_11 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 385464629U)) ? (((/* implicit */unsigned int) var_1)) : (var_2)))) ? (((/* implicit */int) (short)-22197)) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_8)))) : (max((385464629U), (((/* implicit */unsigned int) (short)-16116))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_12 = max((((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 2])) ? (arr_0 [i_0 + 2] [i_0]) : (arr_0 [i_0 + 2] [14U]))), ((+(arr_1 [i_0 - 1]))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22196))) : (var_2)))) ? ((~(var_8))) : (((/* implicit */int) var_0)))), (-1323335203))))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((short) (short)1))) && (((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */int) (short)-22197)))))))))))));
        var_15 = (~(((unsigned int) -1383357370)));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (unsigned int i_3 = 4; i_3 < 13; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                arr_15 [i_5] [i_5] &= ((/* implicit */short) min((min((var_3), (((/* implicit */unsigned int) arr_13 [i_3 - 2] [i_4] [i_4] [i_5] [(short)5])))), (((/* implicit */unsigned int) (~(-1323335203))))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_1)))) ? ((+(3251482513U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21632)))))) ? ((~(((/* implicit */int) arr_4 [i_3 + 2] [i_5])))) : (((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))));
                                var_17 *= ((/* implicit */short) (~(min((min((4095), (1323335188))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (var_5) : (((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                    arr_16 [i_3] [(short)15] [i_3] = ((/* implicit */int) (~(min((((/* implicit */unsigned int) arr_12 [i_2] [i_3 + 4] [i_3] [i_3 - 3] [i_3 - 3])), (2216680198U)))));
                }
            } 
        } 
        arr_17 [i_1] [i_1] = arr_2 [10];
    }
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */int) var_9);
        var_19 *= ((/* implicit */short) min((((/* implicit */int) ((short) var_6))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21632))) : (4294967292U)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (-1323335203))) : (((2147483646) / (((/* implicit */int) arr_18 [i_6]))))))));
    }
}
