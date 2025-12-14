/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (max((min(22, var_9)), (min((min(var_16, var_4)), ((var_2 ? var_10 : var_17))))));
    var_21 = (max(((var_12 <= (12 / var_19))), (((max(var_2, var_14)) >= -64))));
    var_22 = (min(var_18, var_18));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_1] = var_11;
                    arr_11 [i_1] [i_1] = var_5;
                    arr_12 [i_1] [i_1] [i_1] = 94;
                    var_23 = (((((var_3 ^ var_10) & (min(6625625708663963177, -73)))) | ((min(4434, (~4434))))));
                    var_24 |= ((-(arr_1 [i_0])));
                }
            }
        }
    }
    var_25 = ((var_10 - ((var_18 ? (var_19 > 791539622) : (var_13 + var_4)))));
    #pragma endscop
}
