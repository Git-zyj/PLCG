/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (2674807758 ^ 2294786466)));
                    var_16 = (min(var_16, var_7));
                    arr_8 [i_0] [i_0] = max(1217928072, 3077039211);
                }
            }
        }
        var_17 &= min((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1]));
        var_18 = (1217928072 ^ 4294967292);
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_19 = (1217928068 + (((-(var_5 > 3077039224)))));
        arr_11 [1] &= var_13;
        arr_12 [1] [1] &= 4294967295;
    }
    var_20 = (max(var_12, (~16)));
    #pragma endscop
}
