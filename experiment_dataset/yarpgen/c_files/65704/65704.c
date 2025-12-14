/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = (arr_6 [i_2] [i_1] [i_0] [i_0]);
                    var_11 |= ((((arr_6 [i_0] [i_1] [i_1] [i_2 + 1]) ? (arr_4 [i_2] [i_0 + 1]) : (arr_7 [i_0 + 1] [i_2 + 3]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                var_12 = ((((((min(var_2, (arr_13 [i_3] [i_3] [i_3])))) ? -var_0 : ((144115170895986688 ? var_4 : 536870911))))) ? var_3 : var_3);
                arr_15 [i_3] [i_3] [i_3] = (arr_4 [i_3] [i_3]);
                var_13 = ((min(((~(-2147483647 - 1)), ((min(var_4, (-127 - 1))))))));
                var_14 = (max(var_14, ((((((118 ? (arr_11 [i_3] [i_4]) : (arr_11 [i_3] [i_3])))) ? (arr_11 [i_4] [i_3]) : (max((arr_11 [i_3] [i_4]), (arr_11 [i_4] [i_4]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_5] = (arr_22 [i_6 - 2] [i_6 - 2] [i_5]);
                    var_15 = (((-(arr_1 [i_5 - 1]))));
                    var_16 = var_0;
                    arr_24 [i_6] [i_6] [i_6 - 2] = (arr_1 [i_6]);
                }
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
