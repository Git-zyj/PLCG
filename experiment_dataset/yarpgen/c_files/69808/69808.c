/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((~(~var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((~var_0) != var_0));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1 - 1] = ((arr_2 [i_0]) || var_8);
                            var_13 &= (~var_8);
                            var_14 = var_5;
                            arr_13 [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_1 - 1] [i_2 - 1] [i_2 - 1] [i_3] [1] [i_4]);
                        }
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] [i_3] = arr_10 [i_0] [1] [i_0] [i_0] [i_0];
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_15 = ((~(arr_5 [1] [i_2 - 1] [i_5])));
                        arr_17 [i_0] = ((((((var_3 >= var_6) >= (((arr_11 [i_0] [i_1 - 1] [i_1 - 1] [1] [i_1 - 1] [i_1] [i_1]) * (arr_8 [i_0] [i_1] [i_2] [i_5])))))) * var_4));
                    }
                    arr_18 [i_0] [i_1] [i_1] [i_0] = (i_0 % 2 == 0) ? (((((~var_5) % (((var_6 >= (arr_7 [i_0] [i_0] [i_0])))))) >= (min((((arr_9 [i_0] [i_1] [i_1 - 1] [i_2] [i_2] [i_2]) * var_3)), var_4)))) : (((((~var_5) * (((var_6 >= (arr_7 [i_0] [i_0] [i_0])))))) >= (min((((arr_9 [i_0] [i_1] [i_1 - 1] [i_2] [i_2] [i_2]) * var_3)), var_4))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_16 -= (1 < ((((!(arr_9 [i_0] [i_0] [i_1] [1] [i_1 - 1] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_17 *= (max((~0), 1));
                                arr_27 [1] [i_7] [i_0] = ((((-((max(var_10, var_8))))) - 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_18 = min(var_0, ((((var_8 && (arr_3 [i_0]))) && var_8)));
                                arr_33 [i_0] [i_0] [i_0] [1] [i_0] = (!((((arr_30 [i_0]) + (arr_30 [i_0])))));
                                arr_34 [i_0] [i_0] [i_6] [i_0] [1] = ((var_5 * ((~(arr_32 [i_0] [i_1] [i_1 - 1] [i_1] [i_10])))));
                                arr_35 [i_6] [i_0] [i_0] [i_6] [i_6] = ((~((((arr_23 [i_0] [i_1] [i_6] [i_10]) || 0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
