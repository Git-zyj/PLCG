/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((0 & ((min(1, 47)))))) & ((((min(var_10, var_10))) ? (((1 ? 22589 : var_2))) : 18420492028446680920))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 |= ((-71 & (max(((44 | (arr_3 [i_1 + 3] [i_0] [i_0]))), (arr_2 [i_1 + 2] [20] [i_1])))));
                arr_6 [i_0] [i_0] [14] = (max(0, (max(-44, 255))));
                var_14 = ((((arr_1 [i_0 - 3]) ? (((1 ? 42947 : 0))) : (min(var_10, 15007912125665061170)))));
                var_15 = (max(var_15, (((((1 && (arr_2 [i_0] [i_1] [i_1 + 3]))) ? var_0 : ((((min(63488, -70))) ? (arr_0 [i_0 - 3]) : (arr_5 [i_0]))))))));
            }
        }
    }
    var_16 = var_6;
    var_17 = ((var_11 ? var_7 : ((65535 ? var_5 : ((1 ? 11131318125385746999 : var_10))))));

    /* vectorizable */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] |= ((var_0 - (arr_1 [i_2 - 1])));
        arr_11 [19] = ((1 ? 255 : -100));
    }
    #pragma endscop
}
