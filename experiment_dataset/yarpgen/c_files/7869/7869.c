/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = ((79 > (-2147483647 - 1)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 &= ((((var_6 ? (((min(var_11, var_12)))) : var_13))) ? ((-((var_14 ? var_7 : var_12)))) : var_2);
                    arr_7 [i_0] [i_0] [i_0 - 3] = ((((((((var_14 ? var_8 : var_8))) ? var_8 : var_9))) ? var_11 : (var_1 >= var_10)));
                }
            }
        }
    }
    var_19 = (max(((((max(var_9, var_3))) ? var_0 : (~var_1))), (((((max(var_12, var_10))) > (max(var_1, var_14)))))));
    #pragma endscop
}
