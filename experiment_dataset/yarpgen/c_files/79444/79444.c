/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 = (max((arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_6 [i_1 + 1])));
                            arr_9 [i_2] [i_2] [15] [i_2] [i_2] [15] = ((-171 ? (arr_4 [i_1] [i_1 - 1] [i_1 - 1]) : 2047));
                            var_13 = arr_0 [0] [0];
                            var_14 = ((min((arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]), (((4920216048934438896 ? -1523085070 : (arr_0 [i_0] [i_1])))))));
                        }
                    }
                }
                var_15 = (min((((arr_8 [i_1 + 1] [i_1 + 1] [2]) ? (arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1]) : (arr_8 [i_1 - 1] [i_1 + 1] [i_1]))), ((-(min(199, (arr_4 [i_0] [1] [i_0])))))));
            }
        }
    }
    var_16 = (min(var_16, (((((((((var_9 ? var_4 : var_0))) ? (~var_7) : var_9))) > ((-var_9 ? (max(7784584747994448020, var_6)) : var_4)))))));
    var_17 = var_2;
    #pragma endscop
}
