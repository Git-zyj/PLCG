/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!(((4649173764480169545 ? ((max(1, var_1))) : ((46445 ? var_10 : 4649173764480169550))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> ((((-9223372036854775803 ? ((46474 ? 8475777381078538476 : -4517428655389271229)) : (((109 ? (arr_3 [i_1]) : -9119874839726271136))))) - 8475777381078538436))));
                    var_13 = (max((arr_1 [13]), 8));
                    arr_8 [i_2] [i_1] [i_1] [i_2] = ((-19062 ? ((((arr_4 [i_1 + 3] [i_1] [i_2 + 2]) / (arr_4 [i_1 + 3] [i_1] [i_2 + 2])))) : 9986299886187828852));
                    var_14 = var_4;
                }
            }
        }
    }
    var_15 = var_3;

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_11 [i_3] = 3673824743346454076;
        arr_12 [i_3] [i_3] = (((((0 ? ((~(arr_5 [i_3]))) : 2250432525732373575))) ? (((46468 + 122) ? 523393582 : (-9223372036854775807 - 1))) : (arr_0 [i_3])));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_17 [i_4] = ((-(arr_14 [i_4] [i_4])));
        arr_18 [i_4] = var_8;
        var_16 = (-9223372036854775807 - 1);
    }
    #pragma endscop
}
