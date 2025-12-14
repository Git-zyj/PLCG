/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((var_10 ? var_1 : var_7)), var_6));
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (((((-var_11 ? ((var_0 ? var_7 : var_5)) : ((var_0 ? var_0 : var_5))))) ? ((var_8 ? var_15 : 2551785961733020723)) : (!-1)));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_21 = var_8;
                    arr_8 [i_0] = (!var_3);
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((-((-((var_8 ? var_0 : var_2))))));
                }
            }
        }
    }
    #pragma endscop
}
