/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (((((((max((arr_2 [i_0]), var_9))) + ((0 ? var_13 : 4294967295))))) <= (!var_2)));
                arr_4 [i_0] [i_0] [i_0] = ((((((arr_0 [i_0]) ? (arr_2 [i_0]) : var_8))) ? (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0]))) : ((((arr_1 [i_0] [i_0]) ? 255 : (arr_1 [14] [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_11 [i_3] = ((((((min((arr_7 [i_3]), (arr_8 [i_3] [i_3] [i_3])))) && (arr_10 [i_2] [i_3]))) && ((!(arr_10 [i_2] [i_3])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_15 = ((((((max((arr_9 [i_3] [i_5 + 1]), (arr_13 [14] [i_3] [i_4]))) - (((((arr_9 [i_2] [i_2]) <= (arr_12 [i_5] [i_4] [i_3])))))))) ? (((arr_9 [i_5 - 1] [i_3]) ? (arr_7 [i_5 - 1]) : (arr_7 [i_5 - 1]))) : var_13));
                            var_16 = ((arr_5 [i_2] [i_2]) ? (min(var_5, (arr_13 [i_3] [i_3] [i_5 + 2]))) : ((((arr_5 [i_2] [i_3]) << (((arr_13 [i_3] [i_3] [i_4]) - 4099279339))))));
                        }
                    }
                }
                var_17 = arr_14 [2] [i_3];
                var_18 = (min((max((((arr_10 [i_2] [i_2]) ? (arr_12 [i_2] [i_2] [i_2]) : var_13)), (arr_14 [i_2] [i_3]))), (arr_13 [i_3] [i_2] [i_3])));
                arr_18 [i_2] [i_3] = ((((-(((arr_14 [i_2] [i_3]) ? (arr_14 [14] [i_3]) : (arr_6 [i_3] [i_3]))))) << (((((arr_6 [i_2] [1]) - (arr_17 [i_2] [i_3] [i_3] [i_3])))))));
            }
        }
    }
    #pragma endscop
}
