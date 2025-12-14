/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_2] [i_3] [i_3 - 1] = var_8;
                            arr_14 [i_3] [i_2] [i_2] [i_0] [i_2] [i_0] = (max((((arr_3 [i_1 + 3] [i_3 - 2] [i_0 + 1]) ? var_2 : 1)), (((1 ? var_9 : (arr_11 [i_1 + 3] [i_3 + 1] [i_2]))))));
                            var_16 = (min(var_16, ((max((min(var_9, (arr_4 [i_0 + 2] [i_0 + 1]))), ((min(var_8, ((min(var_15, (arr_9 [i_1 - 1]))))))))))));
                        }
                    }
                }
                var_17 = (min(var_17, ((min((((1073741568 ? var_5 : (arr_2 [i_0 - 1])))), ((((arr_0 [i_1 + 1]) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_4 [i_0] [i_1])))))))));
            }
        }
    }
    var_18 = (((((((max(var_6, var_15))) ? ((var_2 ? var_2 : -9223372036854775804)) : ((var_15 ? 1322237429437848481 : -9117874258641368742))))) ? var_15 : var_9));
    var_19 = var_1;
    #pragma endscop
}
