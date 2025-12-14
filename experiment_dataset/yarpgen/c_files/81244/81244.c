/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (!-127);
                arr_6 [i_0] [i_1] = ((var_5 || ((min((((arr_2 [i_0]) ? 18446744073709551585 : 68)), (~73))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = (((min((((4 ? (arr_8 [i_0] [i_0 + 1] [i_0] [i_0]) : -41))), 45)) - var_3));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] = (min(((min(0, (-127 - 1)))), ((0 >> (((arr_15 [i_3 - 2] [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 - 2]) - 11614063266636054334))))));
                                arr_18 [i_4] [i_4] [i_4 - 3] [i_4] [i_4 - 1] [i_4] = ((((arr_12 [i_0 - 1] [i_4 - 2] [13] [i_4] [i_4] [i_4]) > -7039)));
                                var_21 *= ((((((arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1]) ? (arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]) : (arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1])))) ? (((((-59 ? 56 : -16))) ? (arr_15 [i_1] [i_4] [i_3] [i_0] [i_1] [i_0] [i_0]) : (!278746187162855199))) : (((!var_3) | ((-127 ? 255 : -20))))));
                                var_22 = max(-15718462936389258698, (((arr_3 [i_0] [i_0]) ? (((-32767 - 1) ? var_8 : (arr_8 [i_0 - 1] [i_1] [i_3 - 1] [i_4 - 4]))) : (!var_15))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_23 = 74;
                    arr_22 [i_0] [i_1] [i_1] [i_5] = ((((!(arr_21 [i_5] [i_0 - 1] [i_0])))));
                    var_24 = ((((min((arr_14 [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) <= ((103 / (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_25 = -2708317915357467612;
                    var_26 = (((((-49 ? (arr_10 [i_0 + 1] [i_0 + 1] [i_0]) : (arr_10 [i_0 - 1] [i_0 - 1] [i_0])))) == ((6285357126627131786 ? 3 : (arr_10 [i_0 - 1] [i_0 - 1] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
