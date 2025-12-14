/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_11, var_10));
    var_18 = (((!var_16) && var_6));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = (((((var_9 ? var_2 : (arr_5 [i_4] [i_0])))) ? (arr_1 [i_0] [i_1]) : (arr_8 [i_1] [i_1] [i_0] [i_4])));
                                var_20 = (((((arr_3 [i_0 - 1] [i_0 - 1]) - (((arr_3 [i_0] [i_1]) - 9300279455138837337))))) ? (arr_0 [i_0 - 1]) : ((-(max(var_11, (arr_6 [i_1] [i_3]))))));
                                arr_16 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0] [i_0] = (((((arr_4 [i_0]) < -var_6)) ? (arr_5 [i_4] [i_2]) : (((((~(arr_5 [i_0] [i_3])))) ? ((((arr_5 [i_0] [i_3]) ? 7509 : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [i_3])))) : (min(var_11, (arr_9 [i_0])))))));
                                var_21 = ((~((min(7509, 7521)))));
                            }
                        }
                    }
                    var_22 = var_16;
                }
            }
        }
    }
    #pragma endscop
}
