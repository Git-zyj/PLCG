/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!1152921504598458368);
    var_14 = var_12;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_1] [i_1] [i_2] = 141;
                    arr_9 [i_1] = ((var_7 & var_7) ? var_9 : (((var_5 ? 9223372036854775807 : var_4))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_4] = 9181220402419200774;
                                var_15 -= (((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) > var_7));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_1] = (((arr_7 [i_0]) ? (53041 & var_4) : (arr_6 [i_0 + 1])));
                }
            }
        }
        var_16 -= ((~(arr_14 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [1] [i_0 + 2])));
        arr_18 [i_0 + 2] = (~var_11);
        var_17 = var_0;
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = (((((max(9265523671290350820, 7750110121113158153))) ? var_1 : 4604997533885681369)));
        arr_23 [i_5] [i_5] = ((arr_19 [i_5 - 1]) ? ((var_11 ? (arr_21 [i_5 - 1] [i_5 + 1]) : (arr_21 [i_5 - 1] [i_5 - 1]))) : ((-(arr_21 [i_5 - 1] [i_5 - 1]))));
        arr_24 [i_5] = (((((arr_21 [i_5] [i_5 + 1]) ^ var_3)) % (min((arr_21 [i_5] [i_5 - 1]), (arr_21 [i_5] [i_5 - 1])))));
    }
    #pragma endscop
}
