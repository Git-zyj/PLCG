/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_1, ((min(var_0, (min(var_1, var_10)))))));
    var_12 = (((var_1 != ((var_10 ? var_1 : var_6)))));
    var_13 = ((var_4 ? var_3 : (var_8 != var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 &= (((max((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_3 [i_0] [i_0]))), (~var_9))) >> ((((arr_2 [i_0] [i_0] [i_1]) != (arr_2 [i_0] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = ((min((arr_6 [i_0] [i_1] [i_2] [i_0]), (max((arr_3 [i_0] [i_3]), var_4)))));
                            arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] = ((4228088690003229843 ? (arr_5 [i_0] [i_2] [i_3]) : var_6));
                        }
                    }
                }
                var_16 |= ((((((((arr_6 [i_1] [i_1] [i_0] [i_0]) + 2147483647)) >> (((arr_6 [i_0] [i_1] [i_1] [i_1]) + 1794254197))))) != (arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1] [12] [i_0] [i_5] [i_5 - 1] = (arr_6 [i_0] [i_1] [i_4] [i_4]);
                            var_17 = ((!(arr_16 [i_0] [i_1] [i_4] [i_5 + 1])));
                            var_18 &= (min(((+((var_4 ? (arr_5 [i_1] [i_1] [i_0]) : (arr_0 [i_1]))))), ((min((arr_2 [i_0] [3] [i_4]), var_7)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_19 = (min(32764, ((((((arr_0 [i_7]) ^ var_3)) != (arr_8 [i_0] [i_1] [i_0] [i_7]))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] = (min(var_10, var_10));
                            var_20 = (max(var_20, (((!(((-(((arr_0 [i_1]) ? (arr_2 [i_0] [i_1] [i_6]) : (arr_21 [i_1] [i_1] [i_6] [i_7] [i_7] [i_7])))))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
