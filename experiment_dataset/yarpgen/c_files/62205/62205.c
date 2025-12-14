/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = ((((arr_6 [i_0]) ? (((arr_6 [i_0]) ^ (arr_3 [i_0] [i_2]))) : ((max(4294967295, 85))))));
                            arr_11 [i_2] [i_0] = ((((((((((arr_3 [i_2] [i_3]) != (arr_8 [i_2] [i_2] [2] [i_2]))))) * (arr_10 [i_0] [i_0] [i_0] [i_2] [i_3])))) ? (((arr_6 [i_0]) ? ((((arr_10 [i_0] [1] [i_0] [i_0] [10]) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_3])))) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_2]))) : ((((arr_2 [i_0]) - (arr_2 [i_0]))))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] = ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [7]) : (arr_0 [i_0]))));
                var_19 = (!63892);
            }
        }
    }
    var_20 *= ((var_0 ? var_15 : (((~var_7) ? var_17 : (max(var_6, var_7))))));
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_21 -= (min(((min((arr_21 [0] [i_5]), (arr_21 [i_4] [i_5])))), (min((arr_21 [i_5] [1]), (arr_15 [i_4])))));
                    var_22 ^= (((((arr_19 [20] [i_5] [i_5]) >= (arr_13 [i_6] [i_4 - 2]))) ? (((((((arr_15 [i_6]) ? (arr_13 [0] [i_5 - 1]) : (arr_16 [i_5])))) ? ((((arr_19 [20] [20] [8]) >> 14))) : (((arr_16 [9]) ? (arr_13 [i_4 + 3] [i_6]) : (arr_15 [i_5])))))) : 42113));
                }
            }
        }
    }
    #pragma endscop
}
