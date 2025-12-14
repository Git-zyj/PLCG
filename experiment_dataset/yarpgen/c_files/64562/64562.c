/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = ((((var_6 != var_2) ? (((var_5 ? var_6 : var_9))) : ((var_11 ? var_3 : var_8)))) / (var_7 || -var_9));
                arr_5 [i_1] = var_10;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_1] = ((((var_3 ? (((var_11 ? var_1 : var_2))) : ((var_10 ? var_6 : var_4)))) > ((((~var_8) * (var_9 & var_1))))));
                    arr_9 [i_1] [i_1] [i_1] [i_0 + 4] = ((((var_5 ? var_5 : var_11)) % var_2));
                    arr_10 [i_0] [i_1] = var_2;
                }
                arr_11 [i_0] [i_1] = ((((((var_1 / var_1) ? var_2 : var_6))) ? (((var_8 != var_1) + -var_6)) : (((var_1 ^ var_1) + (var_6 > var_0)))));
            }
        }
    }
    var_13 = var_2;
    var_14 = var_4;
    var_15 = ((var_6 || (var_4 >= var_0)));
    var_16 = ((var_0 ? (((((var_8 ? var_11 : var_2))) & var_0)) : (((~var_8) ? var_11 : ((var_5 ? var_4 : var_3))))));
    #pragma endscop
}
