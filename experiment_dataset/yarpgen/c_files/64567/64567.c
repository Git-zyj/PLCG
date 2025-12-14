/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 51;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_20 = (min(var_20, (((19605 << ((((arr_3 [i_1 + 3] [i_1] [i_1 + 3]) < (arr_3 [i_1 + 3] [i_1 + 3] [i_1 + 3])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = ((-1383987650888237809 ? ((~(arr_11 [i_1]))) : (((arr_6 [i_3] [i_0] [i_0]) ? ((var_2 ? -97 : 960)) : -var_9))));
                                arr_12 [i_1] [i_1] = (117 <= -var_1);
                                arr_13 [i_4] [i_1 + 2] [i_1] [i_1 + 2] [i_0] = (((((0 && (arr_5 [i_1] [i_2] [i_1])))) >> (((~-9223372036854775803) - 9223372036854775778))));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    arr_16 [i_1] [i_1] = var_18;
                    arr_17 [i_5 + 1] [i_1] [i_1] [i_0] = ((((min(((9223372036854775807 ? 55650 : 4157078721)), (219 / var_15)))) ? var_8 : ((var_8 * (arr_6 [i_5 - 1] [i_5] [i_5 + 1])))));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_22 = 25467;
                        var_23 += (((((-(arr_20 [i_1 + 3] [i_0])))) ? 60379 : (((arr_11 [i_0]) - (arr_11 [i_0])))));
                        arr_21 [i_1] = (((arr_15 [i_5 + 1] [i_5 - 1] [i_0]) - ((((arr_7 [i_5] [i_5] [i_5 - 1] [i_5] [i_0]) * var_17)))));
                        var_24 = (min(var_24, (((~((var_5 - (arr_15 [i_5] [i_1 + 1] [i_0]))))))));
                        arr_22 [i_6] [i_5 - 2] [i_1] [i_1] [i_0] [i_0] = ((-(min((!var_12), ((-(arr_20 [i_6] [i_0])))))));
                    }
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        var_25 = (((arr_23 [i_1 + 2] [i_1 + 2] [i_5] [i_1 + 2] [i_0] [i_0]) - -65520));
                        arr_25 [i_0] [i_1] [i_0] [i_1] [i_0] = ((((max((arr_18 [i_5] [i_5] [i_5] [i_5]), (arr_18 [i_0] [i_0] [i_0] [i_0])))) && ((((arr_4 [i_7 + 2] [i_1] [i_1 + 1]) ? (((111 ? (arr_7 [i_7 - 1] [i_5 - 2] [i_1] [i_0] [i_0]) : var_12))) : 17301056062202240337)))));
                        arr_26 [i_1] [8] [i_1] [i_1] = ((!(~var_7)));
                    }
                    arr_27 [i_1] [i_1] = (((((var_9 - var_8) + 2147483647)) << (((((var_2 != var_3) ? (min((arr_18 [16] [i_1] [i_0] [i_0]), 1383987650888237794)) : var_10)) - 1383987650888237794))));
                }
                var_26 = ((!((((arr_20 [i_1 + 3] [i_1 + 3]) ? -68 : var_2)))));
            }
        }
    }
    #pragma endscop
}
