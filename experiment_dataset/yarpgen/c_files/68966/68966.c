/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = ((((min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2])))) || (((var_12 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 += (max((((!(arr_5 [i_1])))), ((((max((arr_8 [i_0 + 1] [i_1] [1]), var_7))) ? (arr_7 [i_0] [i_2]) : (arr_1 [i_0 - 1])))));
                            var_17 &= ((((max((min(var_14, 15912)), (arr_10 [i_3 - 2] [i_3 + 1] [i_3] [i_3 - 2])))) ? (min((((var_14 ? -2147483633 : var_8))), (max(var_2, (arr_2 [i_0] [i_1]))))) : (arr_10 [i_2] [i_2] [i_0 - 2] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_18 = (((((var_11 ? var_5 : var_13)))));
    #pragma endscop
}
