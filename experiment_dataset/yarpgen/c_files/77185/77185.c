/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_10 & ((((min(var_8, 127))) + ((var_2 ? var_13 : var_9)))))))));
    var_17 = (min(var_17, (((var_13 ? 58346 : ((~(var_2 - 282281089))))))));
    var_18 = (max(var_18, ((max((var_14 + -112), var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_19 = ((+((min((arr_3 [i_3 - 2] [i_3 + 1]), (arr_3 [i_3 - 1] [i_3 - 1]))))));
                        arr_12 [i_0] [i_1] [i_0] [i_3 + 1] = ((~(((arr_4 [i_3 + 1] [i_3 + 1]) + ((25793 ? -127 : 2072548422))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {
                        var_20 = -1;
                        var_21 = ((~(var_0 != 86)));
                    }
                    var_22 = (arr_9 [i_0] [i_0] [i_0]);
                    arr_15 [i_0] [i_1] [i_2] = (((((!(var_0 % -8589)))) <= ((~(min((arr_7 [i_2] [i_1] [i_0] [i_0]), var_10))))));
                }
            }
        }
    }
    #pragma endscop
}
