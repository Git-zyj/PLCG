/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        arr_8 [i_1] [i_2] = (max((((((var_7 ? var_14 : var_15)) <= ((min(242, 1564356013)))))), (((((((arr_6 [7] [i_0] [7] [i_1] [2] [7]) || var_8)))) + -var_12))));
                        var_18 = var_8;
                        var_19 = (((~(~47))));
                    }
                    var_20 = (((arr_2 [i_1] [i_1 + 3]) <= var_10));
                }
            }
        }
    }
    var_21 = ((~(((((1 ? var_7 : var_1))) ? (~var_17) : (var_5 & 1)))));
    var_22 = 16;
    #pragma endscop
}
