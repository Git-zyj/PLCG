/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (1 ? 1 : -79);
                var_20 = ((((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : 1)));
                var_21 = (max(var_21, (((((((var_3 ? var_11 : var_2)))) ? ((((((arr_0 [i_0]) ? (arr_3 [8] [i_1]) : (arr_3 [0] [i_1])))) ? (((arr_2 [i_1] [i_1] [0]) ? 5685399802405210169 : var_4)) : (((arr_1 [2] [i_1]) ? var_7 : var_17)))) : ((((!(arr_1 [6] [i_1]))))))))));
            }
        }
    }
    var_22 = ((!1) ? (((((253 ? var_13 : 79))) ? (((226 ? 253 : var_16))) : 2147483647)) : ((-1 ? 2147483647 : 288230376151711743)));

    /* vectorizable */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] = var_5;
        var_23 = ((var_14 ? var_5 : var_16));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_4] [i_5 + 2] = ((((!(((var_1 ? var_2 : 41169))))) ? ((((min((arr_11 [i_3]), (arr_11 [i_3])))) ? (((1 ? 3 : 1))) : ((var_5 ? 67108863 : (arr_11 [i_3]))))) : ((((((var_18 ? var_3 : (arr_11 [i_3])))) ? var_13 : (((arr_15 [i_3] [i_3] [i_5]) ? 3 : (arr_12 [i_3] [i_3]))))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            arr_25 [i_3] [i_3] [i_4] [i_5] [i_6] [i_7] = (!(arr_18 [i_3] [i_4] [16] [i_6] [i_3]));
                            arr_26 [i_3] [i_7] [i_6] [i_5] [i_4] [18] [i_3] = 24367;
                        }
                        var_24 = ((~(arr_12 [i_3] [i_3])));
                        arr_27 [i_6] [i_5] [i_3] [i_4] [i_3] = ((((((arr_15 [i_3] [i_3] [i_3]) ? -2952523 : -14))) ? ((((!(arr_11 [i_3]))))) : ((var_12 ? 78 : (arr_15 [1] [i_3] [i_6])))));
                    }
                    var_25 = ((+(((arr_20 [i_5 - 1] [i_5 - 1] [i_5]) ? var_18 : (arr_20 [i_5 + 3] [i_5 + 2] [i_5])))));
                }
            }
        }
        var_26 = ((((((!(arr_13 [i_3]))) ? (!var_8) : 236))) ? ((((!(arr_21 [i_3] [i_3]))))) : ((-17 ? (arr_14 [i_3] [i_3] [i_3] [i_3]) : var_7)));
        arr_28 [i_3] = (max(((((1 ? var_5 : 21925)))), ((0 ? ((var_7 ? var_13 : (arr_18 [i_3] [i_3] [i_3] [i_3] [i_3]))) : (arr_20 [i_3] [i_3] [i_3])))));
    }
    #pragma endscop
}
