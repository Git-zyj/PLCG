/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((~var_0) == (min(var_2, var_6))));
    var_17 = (((24623 + 24623) / ((var_13 - (!-24623)))));
    var_18 = (max(var_18, ((max(var_4, (((((var_3 ? var_11 : 110))) ? var_4 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (22 >> (4394072168212618137 - 4394072168212618109));
                var_20 -= ((min(4394072168212618137, (arr_1 [i_1 - 1]))) >> ((((-125 ? (arr_3 [i_0] [i_1 - 2]) : (arr_3 [i_0] [i_0]))) - 2356384342911457367)));
            }
        }
    }
    #pragma endscop
}
