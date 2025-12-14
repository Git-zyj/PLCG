/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = ((17444732616515400560 == (((arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 2]) ? (-579416995 - 18446744073709551614) : var_9))));
                var_12 = 255;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 = (((((((min(4260107093, -7257))) ? -var_1 : (!var_7))) + 2147483647)) >> (((~-7237) - 7226)));
                            arr_11 [i_0] [i_2] [i_0] [i_0] = (((((arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2]) ? (max(var_7, 972678658)) : (((arr_9 [i_0 - 1] [i_2]) * 1)))) - ((((8241147447216690432 || (~7272)))))));
                        }
                    }
                }
            }
        }
    }
    var_14 = (16899813216894916547 & var_2);
    #pragma endscop
}
