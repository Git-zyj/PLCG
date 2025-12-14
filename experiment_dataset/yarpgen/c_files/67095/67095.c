/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_14 = var_13;
        arr_2 [i_0] = var_5;
        arr_3 [i_0 - 1] [i_0 - 1] = (((arr_1 [i_0]) ? (arr_0 [i_0]) : -var_3));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0 - 2] [i_1] [i_2] [i_2] = 1;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_15 -= 745405746;
                        arr_14 [i_0] [i_2] [i_1] [i_0] [i_2] [i_3] = (!-1);
                        var_16 += ((-3941532161902645979 ? (((var_7 ? var_4 : var_12))) : ((4169240361 ? 262128 : 255))));
                        var_17 = (min(var_17, (((29239 ? -1884396898578509572 : 36298)))));
                        var_18 = (46999 - 1);
                    }
                    arr_15 [i_0 - 2] [i_2] [i_2] = (((arr_1 [i_0 - 1]) ? (arr_7 [i_0 - 2] [i_0 + 1] [i_0 - 2]) : var_10));
                    var_19 = ((var_0 ? 33099 : 0));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_20 = (((min(34198, 14537))) ? ((((1 ? (arr_17 [i_4]) : 262731212)) & (!-8100596460697618329))) : (((74 ? (((!(arr_12 [i_4] [i_4] [8] [i_4] [i_4] [8])))) : (arr_16 [i_4] [i_4])))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    arr_23 [i_4] [i_4] [i_4] [i_6] = (min((((!((min(3536359792, 1)))))), (~var_6)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_21 = ((var_4 ? (min((1 & 24325), var_6)) : ((min((arr_16 [i_4] [i_4]), var_10)))));
                                var_22 = ((((max(65535, var_1))) ? ((var_13 ? 3536359784 : 149)) : var_12));
                                arr_30 [i_8] [i_5] = (((2555731597 ? 125726934 : 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = -var_0;
    var_24 -= ((~((~(min(47024, var_13))))));
    #pragma endscop
}
