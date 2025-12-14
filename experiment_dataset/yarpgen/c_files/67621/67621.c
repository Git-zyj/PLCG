/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 -= ((((max((arr_7 [i_2 - 1] [i_1] [i_2] [i_2]), (-9223372036854775807 - 1)))) ? ((((((arr_4 [i_2 + 1] [i_1] [i_0]) ? var_10 : var_8))) | (var_12 | var_14))) : (((((min((arr_2 [i_2]), (arr_0 [i_1])))) ? var_16 : var_7)))));
                    arr_9 [i_2] [i_0] [i_0] [i_0 + 1] = ((((((((-290836911 ? 70 : 0))) ? 83 : (min(2694453684, 1))))) > (min(((var_5 ? var_4 : (arr_5 [i_0] [i_1] [i_0]))), 1))));
                }
            }
        }
    }
    var_19 = (min(var_19, (((var_17 ^ (((((1 ? 1 : var_14)) != (((var_8 ? 3584 : var_2)))))))))));
    var_20 |= (max((((((max(var_9, -44))) ? var_16 : ((max(var_13, 5479)))))), (min((6500602485690135265 + var_11), var_4))));
    #pragma endscop
}
