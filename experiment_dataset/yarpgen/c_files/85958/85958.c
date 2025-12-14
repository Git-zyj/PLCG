/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_15 += ((~(arr_4 [i_0 - 3] [i_2 - 2] [i_2 - 2])));
                            var_16 = (((arr_6 [i_2] [i_1]) << (((arr_4 [i_0] [i_2 + 1] [i_4]) - 12381748471261751209))));
                        }
                        arr_12 [7] [i_2] [i_1] [i_0] = var_5;
                        var_17 = (((arr_7 [i_0 - 2] [i_2 - 1]) ? (arr_5 [i_0 - 3] [i_1] [1]) : -2147483646));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_18 = var_5;
                    var_19 = (761372788 ? (arr_2 [i_0 - 3]) : ((((1 >= (arr_15 [i_0] [i_0] [i_0]))))));
                    var_20 = (((((var_4 ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_14 [i_0] [i_0])))) ? (arr_6 [i_0] [i_5 - 1]) : 761372786));
                    arr_17 [i_0] [i_5] [i_5] [i_6] = (((arr_14 [i_0] [i_5 + 1]) << (-32757 + 32773)));
                }
            }
        }
        arr_18 [i_0] [i_0] = -6731;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_22 [1] = ((((((-32767 - 1) - -32761))) ? (((arr_19 [i_7]) ? var_11 : (arr_19 [i_7]))) : (((-(arr_20 [5]))))));
        arr_23 [20] [i_7] = -6709;

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_21 = ((-37 ? (arr_21 [i_7]) : (arr_21 [i_7])));
            var_22 = var_12;
            arr_26 [i_7] [i_8] = ((((((arr_24 [i_7] [i_8]) ? (arr_19 [i_7]) : (arr_19 [i_7])))) && (arr_24 [i_8] [i_8])));
            var_23 = (min(var_23, (6730 * -17298)));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 21;i_10 += 1)
            {
                {
                    arr_32 [i_9] = (arr_25 [i_7] [i_10]);
                    var_24 = (arr_30 [i_7] [i_10 + 1] [i_7] [i_9]);
                    var_25 = (arr_30 [i_10 - 3] [i_10 + 1] [i_10 - 3] [i_9]);
                }
            }
        }
        var_26 = (arr_19 [i_7]);
    }
    var_27 += var_12;
    var_28 = (((max((max(var_10, var_3)), 43907)) ^ 1));
    #pragma endscop
}
