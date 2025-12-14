/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_5 ? 7 : 0));
    var_20 = (max((min(var_7, (var_18 && var_1))), var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 &= (((((-4519689433508122627 && (var_10 > var_4)))) ^ (var_13 <= var_11)));
                arr_7 [i_0] = (max(((((1 + var_11) ? 1 : (arr_5 [i_0] [i_0])))), (((var_8 && var_8) ? (arr_2 [i_0] [i_1]) : var_11))));
            }
        }
    }
    var_22 = -122;
    var_23 -= var_5;
    #pragma endscop
}
