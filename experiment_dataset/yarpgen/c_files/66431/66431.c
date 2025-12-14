/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_14 ? (((!var_2) + ((max(var_9, var_14))))) : ((-((var_3 << (var_3 - 708483934)))))));
    var_16 &= (-2147483647 - 1);
    var_17 = ((((((~var_2) + (max(0, 0))))) ? (~-31613) : ((min(1877, (15126 >= var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (min(var_7, (((~((((-2147483647 - 1) != (arr_4 [i_1])))))))));
                var_19 = var_12;
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
