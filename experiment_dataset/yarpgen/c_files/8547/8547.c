/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (1 * var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = min(((3040350891615279993 - (arr_2 [i_0] [i_0]))), (min((arr_5 [i_0] [i_1]), (min((arr_5 [i_0] [i_1]), (arr_3 [i_0]))))));
                var_20 *= ((max((arr_3 [i_1]), (arr_2 [i_0] [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] = ((~(((arr_14 [i_0] [1] [i_2] [i_0] [i_0]) - (arr_14 [i_4] [i_0] [i_0] [i_1] [i_0])))));
                                var_21 = (~3702857414052766554);
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = (1 ? ((((!(1 - 1074588414485268600))))) : (((arr_5 [i_0] [i_3]) ? (!1074588414485268600) : ((1 ? (arr_6 [i_4]) : -7546819438439070990)))));
                                arr_18 [i_0] [i_0] [i_0] [i_4] [i_0] [21] = (((1 * 1) ? (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [5]) : (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) % (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [2])))));
                                var_22 = (min(var_22, (max(7160335281961723960, 1))));
                            }
                        }
                    }
                }
                var_23 = (max(var_23, ((min(1, 1)))));
            }
        }
    }
    var_24 = -1074588414485268588;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_25 = (!1074588414485268600);
                        var_26 &= (arr_2 [i_7] [i_6]);
                        var_27 = (min(var_27, ((1 + (arr_10 [i_5 + 1])))));
                        arr_30 [i_7] [16] [i_6] = 1;
                    }
                }
            }
        }
        var_28 *= ((((!(arr_15 [2]))) ? (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5 + 1]) : 1));
    }
    #pragma endscop
}
