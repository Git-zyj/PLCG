/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (i_0 % 2 == zero) ? ((max(((((((((arr_5 [i_2 + 1] [i_0] [i_0]) - var_12)) + 2147483647)) << (((arr_7 [12] [i_1]) - 101))))), (((((115 ? (arr_8 [1] [i_1] [i_2 + 1]) : 0))) ? (((arr_6 [i_0] [i_1] [i_2] [i_0]) % var_6)) : (4284604815 <= 0)))))) : ((max(((((((((((arr_5 [i_2 + 1] [i_0] [i_0]) - var_12)) - 2147483647)) + 2147483647)) << (((arr_7 [12] [i_1]) - 101))))), (((((115 ? (arr_8 [1] [i_1] [i_2 + 1]) : 0))) ? (((arr_6 [i_0] [i_1] [i_2] [i_0]) % var_6)) : (4284604815 <= 0))))));
                    arr_9 [i_0] [i_0] [i_0] = ((-(max(((((arr_8 [i_0] [i_0] [i_0]) || -30538))), ((7 ? (arr_2 [i_2]) : (arr_0 [14])))))));
                    var_18 += (arr_0 [2]);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_19 = (arr_1 [i_0]);
                        var_20 = (((arr_7 [i_0] [i_3]) <= 46504));
                    }
                }
            }
        }
    }
    var_21 -= (((((var_14 ? var_7 : 73)) << ((((var_2 ? var_2 : 19031)) - 1139066757)))) ^ -14781);
    var_22 -= var_4;
    var_23 = (max(var_23, var_9));
    #pragma endscop
}
