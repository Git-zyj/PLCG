/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(var_5, (min(var_8, (max(var_10, var_0)))));
    var_18 = (max(var_18, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = var_0;
                    var_20 = (max(var_20, (((((!(arr_3 [i_2] [i_1] [i_2]))))))));
                }
            }
        }
    }
    var_21 = (max(var_21, var_4));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                arr_13 [i_3] = ((((arr_12 [i_3]) ? (arr_8 [i_3]) : (arr_2 [i_3] [i_3]))));
                var_22 = ((-(!var_8)));
            }
        }
    }
    #pragma endscop
}
