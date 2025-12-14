/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_11 = (min((((!((((arr_5 [i_0]) ? (arr_5 [i_1 - 2]) : (arr_3 [i_0]))))))), (min((!var_0), (max((arr_2 [i_0]), 1))))));
            arr_7 [i_0] [i_0] = ((((((arr_6 [i_0] [i_1] [i_0]) <= (arr_2 [i_1]))) ? (max((arr_4 [i_0] [i_0] [i_0]), var_10)) : ((((arr_2 [i_0]) ? (arr_3 [i_1]) : var_9))))) <= var_3);
            arr_8 [1] = ((var_9 ? ((-3193651548035132114 ? ((((!(arr_6 [i_0] [16] [i_0]))))) : (max((arr_4 [i_0] [i_0] [i_0]), (arr_3 [i_1]))))) : -3193651548035132132));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_12 ^= (((((max(var_2, (arr_2 [i_0]))))) ? (((((arr_5 [i_2]) <= (arr_6 [i_0] [i_0] [i_0]))))) : (min(0, (((arr_0 [i_0]) ? var_8 : (arr_2 [i_0])))))));
            var_13 -= var_0;
            var_14 = ((((var_2 <= (((var_3 <= (arr_5 [i_2])))))) ? ((max((var_9 <= var_2), (max(var_0, (arr_6 [i_2] [i_0] [i_0])))))) : ((min((max(var_1, (arr_11 [i_0] [i_0]))), var_6)))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_18 [1] [i_4] [i_3] [i_3] [i_3] = var_3;
                            var_15 = arr_3 [i_0];
                            arr_19 [i_4] [i_2] [i_2] [i_4] [i_2] = (min((max(var_6, (arr_17 [i_3] [i_3] [i_4 - 1] [i_4] [10] [i_3] [i_4 - 1]))), ((((1 <= var_5) <= var_5)))));
                        }
                    }
                }
            }
        }
        arr_20 [i_0] [i_0] = (~1);
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_28 [i_7] [i_6] = (max((min(var_3, (arr_17 [i_6] [i_6 + 1] [10] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1]))), (!var_6)));
                        var_16 = var_10;
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_17 = ((((((min(var_7, var_3))) ? (((arr_21 [i_9] [i_9] [i_9]) ? (arr_29 [i_9]) : var_2)) : ((((arr_6 [i_9] [i_9] [i_9]) <= (arr_16 [i_9] [i_9] [i_9] [8] [i_9] [i_9])))))) <= (arr_25 [i_9])));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                {
                    arr_35 [i_9] [i_9] [i_9] [i_9] = var_6;
                    var_18 = ((!((max(1, (max(3193651548035132114, 1)))))));
                    arr_36 [i_9] [i_10] [1] = var_8;
                    var_19 = (min(var_19, var_1));
                    arr_37 [i_11] [i_9] [i_9] [6] = (((arr_31 [i_9] [i_10] [0]) ? (min(((var_10 ? var_2 : var_0)), ((min((arr_1 [i_9]), var_10))))) : var_6));
                }
            }
        }
        var_20 += (min(((min(1, 4117609457))), (!1)));
        var_21 = (arr_33 [i_9] [i_9] [i_9] [i_9]);
    }
    for (int i_12 = 3; i_12 < 18;i_12 += 1)
    {
        arr_41 [i_12] = var_5;

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_44 [i_12] = (!2978825403);
            var_22 = (((((((min(1, 3639))) <= -32765))) <= -14881));
        }
    }
    var_23 = ((!(((511 ? -3480243518484730924 : 1)))));
    #pragma endscop
}
