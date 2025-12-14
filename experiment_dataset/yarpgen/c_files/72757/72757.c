/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((((((((arr_8 [i_0] [11] [i_1] [i_2]) | 67))) ? 1 : 1)) / var_9)))));
                    arr_10 [i_1] [i_2] = ((~(((((arr_5 [i_0] [i_0]) << 0))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                var_18 = var_11;
                var_19 *= ((~(((~(arr_14 [i_3] [i_3] [i_3 - 1]))))));
                arr_18 [i_3] [i_4] [i_4 + 2] = ((~(((max((arr_11 [i_3] [i_3]), (arr_12 [i_4]))) * (((var_4 ? 163 : (arr_12 [3]))))))));
            }
        }
    }
    #pragma endscop
}
