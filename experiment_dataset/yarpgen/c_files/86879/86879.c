/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = var_8;
                arr_6 [i_0] = var_12;
                var_15 = ((((max((-61 != var_1), -var_13))) ? (-2147483647 - 1) : ((((min(var_9, var_13))) ? (max(var_12, -1037110358)) : (max(1037110357, 1))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 = -33554431;
                            arr_12 [i_2] &= (max(((((max(1037110357, var_13))) ? ((4071487155 ? 0 : 33554439)) : var_7)), ((min(7, -28620)))));
                            var_17 = var_7;
                        }
                    }
                }
                var_18 = (min(((max(((var_5 ? 17590038560768 : 1037110357)), ((var_5 ? var_1 : var_6))))), ((var_5 ? -17590038560765 : ((2147483647 ? var_0 : 1586149395))))));
            }
        }
    }
    var_19 = -2147483647;
    var_20 = (~8905803021315292124);
    var_21 = (max(var_21, (((2 ? (-2147483647 - 1) : 1586149395)))));
    #pragma endscop
}
