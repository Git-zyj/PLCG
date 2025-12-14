/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 *= ((-((min((arr_0 [9]), 18446744073709551606)))));
        arr_2 [i_0] = (!((max(1, 0))));
    }

    for (int i_1 = 1; i_1 < 6;i_1 += 1)
    {
        var_14 = (min(var_14, (((((var_11 ? (arr_1 [i_1] [i_1]) : (arr_0 [i_1]))) != (min((max(1, 1864754336411888985)), (~655910634109111862))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_15 = (arr_0 [17]);

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_12 [i_4] [i_2] [2] [2] [i_2] &= ((!18446744073709551612) != 27649);
                        var_16 = (((arr_11 [i_1 + 3] [1] [i_3]) ? ((~(arr_11 [i_2] [i_2] [i_2]))) : 25717));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_17 = ((max((var_6 != var_4), 15)));
                        var_18 = (((((((arr_10 [i_1] [i_3] [i_3]) < -8)))) / (max(var_2, (arr_1 [i_5] [i_2])))));
                        arr_15 [i_3] [i_1] = ((((max((arr_6 [i_1]), (arr_8 [i_1] [i_5] [7] [7])))) ? (((27649 ? (arr_11 [i_5] [i_3] [i_2]) : (!7)))) : ((-6047368005932672973 ? (((var_2 ? (arr_6 [i_1]) : var_5))) : (12599214109469481313 + 0)))));
                        arr_16 [i_1] = ((403 ? ((min((arr_10 [5] [5] [i_3]), ((min(var_3, (arr_3 [i_1]))))))) : (((31623 << (((var_9 + 3546096957053903879) - 14)))))));
                        var_19 = (min(var_19, var_3));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((arr_4 [i_6 - 1]) ? (((min(var_5, (arr_4 [i_6 + 3]))))) : (((arr_4 [i_6 + 2]) ? (arr_4 [i_6 + 1]) : 18446744073709551606))))));
                                var_21 = (max(var_21, var_9));
                                var_22 = (max(var_22, (((!(max(var_12, (0 > 1048575))))))));
                            }
                        }
                    }
                    var_23 = (min(0, (~1048575)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_24 = (max(var_24, (((-7 ? ((((min(170, var_1))))) : (max(((var_6 << (1 - 1))), 153190601)))))));
                        arr_32 [i_1] = (((((~(max(-1, (arr_4 [i_1])))))) ? (-9223372036854775807 - 1) : ((209 ? var_0 : ((5 ? 65516 : 18446744073709551603))))));
                        arr_33 [i_10] [i_10] [i_1] [i_1] [i_9] [i_9] = (max((!1496752808737437671), (((((493071344811658749 << (((-15 + 75) - 57))))) ? -25855 : ((min(3186, 13)))))));
                    }
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 8;i_11 += 1)
    {
        var_25 = (max((min(99, -2147483628)), ((-7594 ? (arr_26 [i_11] [i_11]) : 2147483620))));
        arr_37 [i_11] = ((((!-8) ? ((-(arr_26 [i_11] [i_11]))) : (~0))));
    }
    #pragma endscop
}
