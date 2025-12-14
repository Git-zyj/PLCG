/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_17 -= (!var_14);

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_18 ^= var_11;
                            arr_12 [i_0] [16] [16] [i_3] = (arr_0 [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2] [12] [1] = (arr_3 [i_0] [i_1]);
                            var_19 = ((var_5 ? (arr_4 [i_0] [i_2] [i_5]) : ((var_5 ? -19677 : 17289234140423278281))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                        }
                        var_20 = ((-(arr_4 [i_0] [i_1] [i_2])));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, -5874));
                        arr_21 [i_0] [i_0] [1] [i_0] = ((!((((max(-2549, var_15)))))));
                        arr_22 [i_0] [1] [i_1] [1] [i_6] = 2548;
                    }
                    var_22 -= (arr_14 [14] [i_1] [14] [14] [i_1] [2]);
                }
            }
        }
        arr_23 [16] [1] = ((!(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((var_5 >> (((((arr_24 [i_7]) ? (arr_7 [i_7] [i_7] [2] [i_7] [i_7]) : (arr_16 [i_7] [i_7] [1] [1] [i_7]))) - 21663))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    arr_33 [i_7] [i_7] [i_9 + 1] = 3336092012157341929;
                    var_23 = ((!(arr_16 [i_9] [i_9 - 1] [i_9 + 2] [i_9 + 3] [i_9 + 2])));
                }
            }
        }
    }
    var_24 = (min(var_24, var_1));
    #pragma endscop
}
