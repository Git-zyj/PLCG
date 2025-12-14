/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_1 ? (((((var_6 ? var_3 : var_10)) | (var_6 ^ var_0)))) : ((252201579132747776 ? 18194542494576803816 : -237130488))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((((((arr_2 [i_0 - 1]) ? 32 : 18194542494576803840))) ? ((-(224 == var_3))) : var_9)))));
                    var_16 = -0;
                    var_17 = var_12;
                    var_18 = ((((min(5051, -7692)))));
                }
            }
        }
    }
    #pragma endscop
}
