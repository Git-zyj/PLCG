/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_7;
                var_18 = (max(var_18, ((2944570577868498723 ? ((-2944570577868498724 ? 34624626 : -2944570577868498734)) : (arr_1 [10] [10])))));
                var_19 = (((((var_14 * (arr_5 [i_0] [i_0] [i_0 - 1])))) ? -var_16 : ((4028715390 ? (arr_5 [i_0] [i_0] [i_0 + 2]) : var_0))));
            }
        }
    }
    var_20 |= (var_9 == var_8);
    #pragma endscop
}
