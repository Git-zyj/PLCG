/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((max(var_8, var_9)));
                    var_16 = 16220675832627163158;
                }
                var_17 = ((((max(var_7, (((!(arr_6 [i_0] [i_1]))))))) <= var_6));
            }
        }
    }
    var_18 = var_10;
    var_19 = (min(((((2226068241082388457 ? var_9 : var_13)))), (min(((-1 ? var_6 : var_5)), (var_15 > var_10)))));
    var_20 |= (~var_6);
    #pragma endscop
}
