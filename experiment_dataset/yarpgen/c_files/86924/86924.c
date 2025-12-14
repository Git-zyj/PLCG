/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2729714332;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [6] [i_0] = (((((~((max(124, 103)))))) ? var_2 : -1165265225));
                var_21 = ((((((var_1 && (arr_0 [i_0])))) + (arr_1 [i_0]))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_22 = (max(var_22, (((134 ? (var_11 != var_16) : ((~(arr_5 [i_2] [i_2] [i_2]))))))));
        arr_11 [i_2] [i_2] = ((~(!0)));
    }
    var_23 = (max(var_23, ((min(((max(var_11, 226))), ((var_4 ? var_8 : (var_6 / var_11))))))));
    var_24 = (((min((((-1 ? 2776164429 : var_4))), var_8)) & (((var_6 ? ((131 ? var_4 : -26366)) : -123)))));
    #pragma endscop
}
