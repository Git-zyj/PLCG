/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= max((max(((var_12 ? var_13 : var_8)), var_10)), ((max(((var_6 << (var_9 - 12811))), (var_13 && 122)))));
    var_18 = ((((((((3221225472 << (-121 + 126)))) ? var_11 : ((1 ? 987581737 : var_16))))) ? 18856 : ((33311 << (((max(var_13, var_12)) - 9717029908823163187))))));
    var_19 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 -= (((-var_4 ? (max(var_5, (arr_5 [i_0] [i_1]))) : ((((arr_1 [i_1]) ? 15343 : var_14))))));
                    var_21 -= (min(56540855728809440, 24139));
                    var_22 = var_2;
                    var_23 -= (min(((1 << ((((arr_3 [i_0] [i_0] [i_0]) < var_3))))), ((max((arr_2 [i_0] [i_0]), 24139)))));
                }
            }
        }
    }
    var_24 = 3834912867550717494;
    #pragma endscop
}
