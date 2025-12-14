/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 += (634883468 < 65527);

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_19 = (((((((arr_6 [6] [i_0]) ? var_0 : (arr_3 [i_0] [i_1]))))) < ((((9223372036854775807 ? (arr_3 [i_0] [6]) : (arr_9 [9] [9] [i_0] [i_0])))))));
                    var_20 = 9223372036854775795;
                }
                var_21 += ((((((max((arr_0 [i_0]), 6)))) < ((var_1 ? var_13 : (arr_8 [i_1] [i_0]))))) ? (-9223372036854775807 < 0) : (max((var_15 / 242), ((max((arr_7 [1] [1]), (arr_6 [i_1] [i_0])))))));

                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    var_22 = ((arr_4 [i_0] [i_0] [i_3]) ? (var_11 - var_9) : (((((min((arr_8 [i_1] [i_3]), (arr_1 [i_1]))) < var_17)))));
                    arr_15 [7] [i_1] [0] = ((((min((arr_6 [1] [i_0]), ((45 ? -860148207 : (arr_8 [7] [i_0])))))) ? ((((var_4 < (arr_14 [i_0] [i_1] [i_3 - 1]))) ? (((arr_13 [i_3]) ? (arr_0 [i_0]) : (arr_9 [i_0] [i_1] [3] [i_0]))) : (((arr_0 [i_3]) ? 1349366341 : 1)))) : (min((arr_7 [7] [i_1]), ((85 ? 117 : 1349366341))))));
                }
            }
        }
    }
    var_23 = var_17;
    var_24 ^= var_2;
    var_25 = var_2;
    #pragma endscop
}
