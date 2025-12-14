/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (var_11 < var_6)));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 += var_8;
        var_19 &= (((var_2 % var_16) ? ((var_5 ? 4294967295 : var_9)) : ((82 ? var_14 : var_15))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = var_11;
        arr_7 [i_1] [i_1] = ((82 ? 797640727 : 2803522435));
        var_20 = var_14;
        var_21 = var_6;
        arr_8 [i_1] = var_15;
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            arr_15 [i_2] [i_3] = var_9;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_3] [i_4] [12] = (((((0 ? 2367985314 : 173))) * 17025636194573096010));
                        var_22 = ((3936506142 ? 173 : (var_16 * var_6)));
                    }
                }
            }
            arr_21 [i_2] [i_2] [i_3] = ((((var_2 ? 82 : 6139991724737264889)) >> (((var_4 ^ var_1) - 4365))));
        }
        var_23 = (((((var_5 ? var_16 : var_1))) & (1 & -1463443535165179388)));
    }
    #pragma endscop
}
