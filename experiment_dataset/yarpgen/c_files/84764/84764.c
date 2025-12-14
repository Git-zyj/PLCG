/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min(4095, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (!(-1 == -1));
                var_19 = (max(var_19, var_12));
                arr_5 [i_1] [i_0] = 6;
            }
        }
    }
    var_20 += var_1;

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] [8] = ((-var_9 & ((~(var_7 * var_10)))));
        arr_10 [i_2] [i_2] = ((0 >= (((!(arr_6 [i_2]))))));
        var_21 = (max(var_21, (((max(216, 1))))));
    }
    #pragma endscop
}
