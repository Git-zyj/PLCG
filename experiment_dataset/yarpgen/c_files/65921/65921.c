/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= (((min((arr_2 [i_0] [i_0]), (arr_0 [i_0]))) >= ((var_8 ? var_4 : (arr_2 [i_0] [i_0])))));
        var_16 = (arr_2 [i_0] [21]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 = (arr_5 [i_1]);
        var_18 = (max(var_18, (((-(arr_2 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] &= ((9195058364474102803 % (((~(arr_9 [i_4 - 3]))))));
                    arr_15 [i_2] [i_2] [i_4] = (min(((-(((arr_8 [i_2] [8] [i_4]) ? -9223372036854775780 : var_9)))), (min((((-(arr_1 [i_4])))), ((9195058364474102798 / (arr_12 [i_2] [i_3] [18])))))));
                }
            }
        }
        var_19 = (((((-(arr_0 [i_2])))) ? (var_4 | var_12) : (arr_1 [17])));
        arr_16 [i_2] = (max((arr_8 [i_2] [i_2] [i_2]), (arr_12 [i_2] [i_2] [11])));
    }
    var_20 &= ((~((var_9 ? var_12 : ((-9195058364474102803 ? var_5 : var_14))))));
    var_21 = (((var_12 | -var_8) ? var_0 : (((min((-113 <= 1143230025), -15))))));
    var_22 += var_12;
    var_23 = var_13;
    #pragma endscop
}
