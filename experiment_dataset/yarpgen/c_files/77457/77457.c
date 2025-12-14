/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (~var_5)));
    var_21 = (((((((min(var_16, 209))) > (var_17 > var_3)))) * (((!(((-1037185444 ? var_16 : var_18))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 = var_10;
                            var_23 = 3668605047;
                        }
                    }
                }
                var_24 = (arr_2 [i_0]);
            }
        }
    }
    var_25 = var_4;
    #pragma endscop
}
