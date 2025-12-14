/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_15 = (((((var_4 ? -2004913384 : (arr_1 [i_0])))) > (min((((-87275876 ? 90 : (-32767 - 1)))), (arr_3 [i_0])))));
            arr_4 [i_0] [5] = 87275875;
            var_16 &= var_8;
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_17 = (((((min(1, (arr_10 [i_0] [i_0] [i_0] [i_0])))) ? 15339 : (arr_12 [i_0] [i_2] [i_3]))));
                        arr_13 [9] [9] [9] [i_2] [i_2] = (((arr_6 [i_2] [i_2] [i_4]) ? var_4 : ((~((1 ? 18446744073709551615 : 32746))))));
                        var_18 += (((max((arr_9 [i_0] [i_0] [i_0] [i_0]), 1))));
                    }
                }
            }
        }
        var_19 = -18446744073709551615;
        var_20 = (min(var_20, (arr_11 [i_0] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        var_21 = ((var_1 ? (arr_15 [i_5 - 1]) : (arr_15 [i_5 + 1])));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_22 = ((1 ? (!-91) : (arr_18 [i_5])));
                    arr_20 [i_5] [i_5] [i_5] [i_6] = (arr_17 [i_5] [i_6] [i_6]);
                    var_23 = ((var_7 ? 87275881 : (arr_19 [i_5] [i_7] [i_7])));
                    arr_21 [i_6] [12] = (((arr_14 [i_6 - 1] [i_7]) ? (arr_14 [i_5 + 1] [i_6 - 1]) : (arr_14 [i_5] [i_5 + 1])));
                    arr_22 [i_6] [i_6] [i_6] = (arr_16 [i_5]);
                }
            }
        }
    }
    var_24 = (max(var_24, var_13));
    #pragma endscop
}
