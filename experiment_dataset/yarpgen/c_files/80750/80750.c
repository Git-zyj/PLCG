/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_11, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = min(var_4, (((!(!var_2)))));
                var_14 = (((((var_0 ? ((var_8 ? var_1 : (arr_4 [6] [1] [i_1]))) : ((min(518980773, -518980771)))))) ? ((-((1386363337 << (var_9 - 72))))) : (518980785 % var_8)));
                arr_6 [i_0] [i_0] [i_0] = (2908603967 && ((max((((var_12 >= (arr_1 [i_0])))), 2908603958))));
                var_15 = var_8;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_1] [1] = (var_4 ? var_9 : var_4);
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((~130) ? (((!(arr_7 [0] [i_1] [i_1] [i_2])))) : -518980781);
                    var_16 = ((+((((arr_4 [i_0] [i_1] [i_2]) > (arr_2 [i_0] [2]))))));
                    var_17 = ((((518980770 ? var_2 : (arr_8 [i_0] [i_1] [i_1]))) < (~46081)));
                    arr_11 [5] [i_0] [i_0] = var_7;
                }
                for (int i_3 = 1; i_3 < 6;i_3 += 1)
                {
                    arr_15 [2] [i_3] = var_5;
                    var_18 = ((((((~-518980771) % (min(var_9, var_5))))) ? ((max(((((arr_14 [i_1]) && 185))), var_8))) : ((1815024862 ? (arr_14 [i_0]) : (!var_9)))));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_19 = ((max((0 + var_12), (~var_3))));
                                var_20 = var_6;
                                arr_22 [i_0] [i_1] [i_3] [i_4] [i_5] = (min((((~1) | (min(185, -964670029)))), var_0));
                            }
                        }
                    }
                    var_21 = ((((((arr_4 [i_1] [i_1] [i_3 + 4]) ? (arr_4 [i_0] [1] [i_3 - 1]) : var_9))) ? (min(var_8, var_7)) : (arr_12 [i_1] [i_0] [i_3 - 1] [i_3])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_22 = (arr_14 [i_1]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_23 = var_0;
                                var_24 = ((((arr_21 [i_0] [i_1] [2]) >= var_9)));
                                var_25 = (arr_26 [i_0] [6] [i_0]);
                            }
                        }
                    }
                    var_26 = (!1);
                    arr_30 [i_0] [i_1] [i_6] [i_0] = 18446744073709551607;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_37 [i_6] [i_1] [i_6] [i_9] [i_1] = -var_4;
                                var_27 = 125;
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (var_1 << (min(var_12, var_8)));
    #pragma endscop
}
