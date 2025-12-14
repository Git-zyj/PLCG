/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (~var_4)));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = (min((((((min(var_2, (arr_3 [i_0] [i_2])))) ? (arr_7 [i_0] [i_0] [i_1 + 1] [i_0]) : (!var_6)))), var_2));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [0] [0] [i_0] [0] [i_4 - 1] = var_11;
                                arr_16 [i_0] = (!(((var_10 ? ((max(var_7, var_7))) : (min((arr_1 [i_0]), var_11))))));
                            }
                        }
                    }
                }
            }
        }
        var_14 ^= (((arr_0 [i_0]) ? (arr_1 [6]) : (max((max(var_3, (arr_12 [4] [i_0]))), ((min(60195, 4)))))));
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        var_15 = 11;
        var_16 = var_11;
        var_17 ^= ((((!(((var_12 ? var_3 : var_5))))) ? var_2 : (!var_8)));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 7;i_7 += 1)
        {
            {
                var_18 = ((40962 << (((min(((min((arr_2 [i_6]), 1760))), (((arr_12 [i_6] [i_6]) ? var_7 : (arr_14 [i_7] [i_7] [i_6] [i_6] [i_6] [i_6] [i_6]))))) - 168))));
                var_19 = max((((arr_19 [i_7 - 1]) ? var_3 : (arr_19 [i_7 + 3]))), (arr_19 [i_6]));
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_20 |= (var_1 - var_8);
                            arr_31 [i_6] [7] [i_6] [8] = var_9;
                            var_21 |= (max(var_6, var_7));
                            var_22 = (max(((-((var_11 / (arr_21 [1] [i_6]))))), (arr_6 [i_6] [i_7] [i_6])));
                            arr_32 [i_6] [i_6] [i_8] [i_9] = ((var_0 ? var_8 : (((((max(var_9, var_6))) ? ((var_3 ? var_10 : var_2)) : ((max(-1, var_7))))))));
                        }
                    }
                }
                arr_33 [i_6] [0] [i_6] = (max(var_10, var_0));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            {
                arr_38 [i_10] = -0;
                arr_39 [i_10] [i_10] [i_11] = ((((max((arr_35 [i_10] [i_11]), (min(32757, 174))))) ? ((var_8 ^ ((((!(arr_35 [i_10] [i_10]))))))) : (var_9 <= var_0)));
            }
        }
    }
    var_23 = ((!(((~((var_4 ? var_6 : var_5)))))));
    #pragma endscop
}
