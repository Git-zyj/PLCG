/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_17 = (!var_5);
            var_18 = (max(var_7, var_7));
        }
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_2 - 3] [i_0] |= var_6;
            arr_9 [i_2] = (max(-var_3, (min(10872541784981747721, 2))));
        }
        var_19 -= (1 - var_2);
        var_20 |= (((max(((var_12 ? var_6 : -9113617313742839774)), (254 + 116))) / ((((var_14 * var_9) - var_7)))));
    }
    var_21 = ((var_6 ? var_1 : var_14));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_22 = (((((((var_4 ? -12083 : var_7)) ^ var_14))) ? (min(var_4, var_6)) : (var_0 < var_2)));
                var_23 -= (var_4 * 1);
                var_24 = ((!(var_4 - var_4)));
                var_25 = (!var_0);
                var_26 = ((6054755306676380464 ? (((1 ? 254 : (!var_12)))) : var_6));
            }
        }
    }
    #pragma endscop
}
