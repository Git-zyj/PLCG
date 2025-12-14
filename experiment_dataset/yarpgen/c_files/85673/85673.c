/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? var_11 : var_8));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [9] [i_3] = ((((var_9 ? var_3 : var_1)) % var_11));
                        var_13 = (min(var_13, (((((((arr_0 [i_0] [i_2]) ? ((9338 ? -19573 : var_3)) : (arr_3 [i_1])))) ? var_10 : (arr_5 [i_2] [i_3 + 2] [i_3] [i_3]))))));
                        var_14 = (((arr_7 [10]) ? var_6 : (arr_0 [i_0] [i_0])));
                    }
                }
            }
        }
        var_15 = (arr_2 [i_0]);
    }
    var_16 = ((!(((var_7 ? var_0 : ((19573 ? 2858872215 : -19573)))))));
    #pragma endscop
}
