/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(var_6, var_12);

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_17 = max((min((~1464074353), 65535)), var_15);
                        var_18 = (((17021 ? var_13 : var_6)) * (!var_1));

                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            var_19 = var_6;
                            var_20 = (1137793042 + 1464074369);
                        }
                        var_21 = (1464074369 ? 4002668310 : (arr_0 [i_0 - 1]));
                    }
                }
            }
        }
        var_22 = ((((1464074389 ? (var_2 - 3473690515) : 3488291707))) ? (~var_8) : var_3);
    }
    #pragma endscop
}
