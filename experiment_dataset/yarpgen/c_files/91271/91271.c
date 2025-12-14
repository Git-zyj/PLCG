/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 ? 24576 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1] [i_2] [i_2] [i_0] = (max(((((((848479441 ? var_3 : -1))) ? 255 : (arr_5 [i_2] [i_2] [i_2])))), ((+(((arr_6 [i_0]) ? var_8 : (arr_3 [i_2])))))));
                        var_13 = var_6;
                        arr_11 [i_2] [i_2] = (((-(-127 - 1))) / (((arr_0 [i_1 - 1] [i_1 + 1]) ? (arr_0 [i_1 - 1] [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1 - 1]))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_14 = ((((1023 ? -1066666291010338080 : (-4716 != var_3))) == ((((((((arr_14 [11] [i_4] [i_2] [i_1] [i_0]) | 127))) > (min((arr_3 [i_0]), 15871516649683203754))))))));
                                var_15 += (min(((((~949361733) ? (0 && 1024801398) : (((!(arr_15 [i_0]))))))), (arr_17 [i_5] [i_5] [i_5 + 1] [i_5] [i_5] [i_5] [i_5])));
                                arr_18 [i_2] [i_1] [i_2] [i_5] [2] [i_4] [i_4] = ((((((arr_13 [i_2] [i_1 - 1] [i_1] [i_1]) ? ((max((arr_0 [i_2] [i_4]), var_4))) : (arr_13 [i_0] [i_1 + 1] [i_1] [i_1])))) ? ((max((((!(arr_12 [i_0] [i_4])))), var_10))) : (max((((arr_15 [i_2]) ? var_6 : var_4)), (arr_2 [i_0] [i_2])))));
                                var_16 += ((+((max((arr_2 [i_4] [i_2]), (arr_0 [i_1 + 1] [i_1 + 1]))))));
                                var_17 = ((((arr_1 [i_0]) >= (arr_2 [i_5 - 2] [i_0]))) ? ((((arr_15 [i_2]) ? (arr_1 [i_2]) : (min(var_1, (arr_4 [i_4])))))) : var_0);
                            }
                        }
                    }
                    var_18 = ((var_0 / (arr_9 [i_0] [i_1 - 1] [i_2] [i_2])));

                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_2] [i_2] [i_6] [i_6] = ((arr_15 [i_2]) == (((arr_15 [i_2]) ? 0 : 5698935893050665057)));
                        var_19 = (((var_8 || (2529039628029798269 || 14427100455337461333))));
                        var_20 ^= (arr_1 [i_2]);
                        var_21 |= (min((min(((3080253228 ? (arr_21 [i_0] [i_0]) : 255)), (arr_17 [i_0] [i_2] [i_1] [i_0] [i_0] [i_0] [i_0]))), (arr_9 [i_0] [i_1] [5] [i_6])));
                    }
                }
                var_22 = (arr_4 [i_1]);
            }
        }
    }
    #pragma endscop
}
