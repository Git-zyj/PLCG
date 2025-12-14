/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(1, ((-5988 ? var_9 : -5988))))) ? ((var_6 ? (!-5977) : ((var_2 ? var_5 : var_10)))) : var_11));
    var_15 = (~var_3);
    var_16 = (min(var_16, ((((((min(-5977, 5976))) ? -2207592325494465903 : var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = ((((min(-5985, (-2147483647 - 1)))) ? ((min(((min(var_0, (arr_1 [i_0] [i_0])))), 28308))) : (((arr_6 [i_0] [i_1] [i_1] [i_2]) ? (arr_6 [i_2] [i_1] [i_1] [i_1]) : (arr_4 [i_0])))));
                    arr_8 [i_0] [i_0] [8] [i_0] = (min(((2207592325494465885 ? var_12 : var_9)), ((var_1 ? 10070 : (arr_6 [i_0] [i_1] [9] [i_1])))));
                }
            }
        }
    }
    var_17 = var_13;
    #pragma endscop
}
