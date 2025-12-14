/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((min((arr_2 [2]), var_8)))));
                var_13 = (max(var_13, (((~(min(((((-127 - 1) ? (arr_1 [0] [i_1]) : 1))), (min((arr_3 [1]), 13377068988603575990)))))))));
                arr_5 [i_0] [i_0 + 1] [i_0] = (268431360 + (min((-7801072031514201910 + 1427938254), (arr_4 [i_1] [i_0]))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_14 = (((0 + 6947512317596591334) ^ (((((!16140901064495857664) > ((8011049225939421818 ? -7 : var_9))))))));
                    var_15 = (((687056026819178833 ? var_4 : (arr_0 [i_0 - 1] [i_1]))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    var_16 = 4;
                    var_17 = (((((arr_9 [i_0] [i_0 + 1] [i_0] [i_0]) ? var_2 : 61413))) ? ((((2147483647 && (arr_3 [i_0]))))) : var_3);
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_12 [i_0] [i_0] [i_0] = (min(-2932211411864686367, (-127 - 1)));
                    var_18 = (((((1174711297203733336 ? 8011049225939421818 : -13))) ? (((((arr_7 [i_1 - 2] [i_1] [i_0 + 1]) != (arr_11 [i_0 - 1] [i_0] [i_1 + 1] [i_1]))))) : ((127 ? 7197660664340796079 : 5936168644110047249))));
                }
            }
        }
    }
    var_19 = ((var_2 << (min(18384, (~-1)))));
    #pragma endscop
}
