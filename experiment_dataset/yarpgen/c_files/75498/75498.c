/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 &= -31;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 *= ((((((1720760341 ? -var_4 : 1720760316)) + 2147483647)) >> (arr_4 [i_0] [i_1])));
                var_16 = arr_4 [i_0] [i_0];

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] &= var_5;
                    var_17 = ((-((-(max(1720760340, var_7))))));
                    var_18 = var_1;
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_19 = (((min((arr_1 [i_1]), 70))) ? (arr_1 [i_0]) : ((((arr_4 [i_0] [i_1]) + (arr_4 [i_0] [i_1])))));
                    arr_12 [5] [i_3] &= 64;
                    var_20 += (min(((min(87, var_3))), (((min(1720760351, var_12))))));
                    arr_13 [i_1] [i_1] [4] = ((-70 ? (arr_9 [i_0] [i_3]) : (((arr_3 [i_3] [i_1] [i_3]) ? (arr_3 [i_0] [i_3] [i_3]) : (arr_3 [i_0] [i_0] [i_0])))));
                    var_21 = (1720760341 >> 1);
                }
                var_22 &= 9223372036854775805;
            }
        }
    }
    #pragma endscop
}
