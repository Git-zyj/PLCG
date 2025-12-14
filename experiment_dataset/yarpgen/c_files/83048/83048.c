/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_0);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = ((((~var_10) ? var_15 : var_10)) - var_12);
                    var_18 = ((var_10 - ((~((min(-28753, (arr_5 [i_0]))))))));
                    var_19 = (max(var_19, ((((-1076 < var_3) ? 18446744073709551615 : ((min(-32765, 1056964608))))))));
                    var_20 *= (((arr_0 [i_0 + 1]) - (arr_0 [i_0 + 2])));
                }
            }
        }
    }
    var_21 -= 28757;
    var_22 = var_5;
    #pragma endscop
}
