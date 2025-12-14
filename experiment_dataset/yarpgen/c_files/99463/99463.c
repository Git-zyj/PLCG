/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(((var_11 ? var_1 : 0)), 7))) ? (((((0 ? var_2 : 4294967272))) ? var_8 : 0)) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = arr_7 [i_0] [i_0] [i_0];
                                var_16 *= ((-(((!(arr_3 [i_2 - 1] [i_0]))))));
                                var_17 = (min((arr_1 [i_2 - 1]), (arr_11 [i_0] [i_0] [14] [i_3] [14])));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4] [i_4] = (((~(arr_5 [18]))));
                                arr_14 [16] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (min((((arr_7 [i_0] [i_2 + 1] [i_0 - 1]) ? (arr_7 [7] [i_2 + 1] [i_0 + 1]) : (arr_7 [10] [i_2 + 1] [i_0 + 1]))), (((arr_7 [i_0] [i_2 - 1] [i_0 + 1]) ? (arr_7 [i_0] [i_2 - 2] [i_0 - 1]) : (arr_7 [11] [i_2 - 2] [i_0 - 1])))));
                            }
                        }
                    }
                }
                var_18 = (max(var_18, ((((!(arr_3 [i_1] [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            {
                var_19 *= var_12;
                var_20 = (min(var_20, ((((((((var_10 ? (arr_16 [10]) : (arr_16 [i_6])))) && (((arr_17 [i_6] [i_6 + 2] [i_5]) > (arr_15 [i_5]))))) ? ((((arr_18 [i_5]) ? ((max((arr_15 [i_5]), (arr_18 [i_5])))) : (arr_16 [i_5])))) : ((+(max((arr_17 [i_5] [i_5] [i_5]), -13)))))))));
                arr_19 [i_5] = (arr_15 [13]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 23;i_8 += 1)
        {
            {
                var_21 = ((((((arr_22 [i_7]) / (max((arr_23 [i_7] [i_7] [i_7]), (-32767 - 1)))))) ? (max((arr_21 [i_7] [i_8 - 2]), (((arr_20 [i_7]) ? (arr_22 [i_7]) : -63)))) : (((arr_22 [i_7 + 3]) ? (arr_22 [i_7 - 1]) : (arr_22 [i_7 + 3])))));
                var_22 -= (arr_21 [i_8] [i_8]);
                var_23 = (max(var_23, (((((!(arr_24 [i_8 - 2]))) ? (!-1300977353660435015) : (arr_24 [i_7]))))));
            }
        }
    }
    #pragma endscop
}
