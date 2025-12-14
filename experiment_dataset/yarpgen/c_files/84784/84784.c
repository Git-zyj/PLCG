/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (max(var_17, var_0));
                var_18 = (min(var_18, (((var_16 + (((17 / ((var_11 << (arr_1 [10] [i_1 - 1])))))))))));
                arr_4 [i_0] = (((((1 / 17) | ((((arr_2 [i_1] [18] [18]) != 134086656)))))) ? 134086656 : 134086656);
            }
        }
    }
    var_19 = var_14;
    var_20 = (((((((6144 ? var_2 : var_16))) ? (((max(var_14, 37875)))) : (18446744073575464959 + 457533882))) * ((((-var_2 != (134086665 != 238)))))));
    var_21 = var_1;
    #pragma endscop
}
