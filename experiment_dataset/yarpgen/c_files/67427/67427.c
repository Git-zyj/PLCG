/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_16 = (((arr_11 [i_0] [i_1] [17] [i_1] [i_0 - 1]) ? var_11 : (arr_1 [i_0 + 1])));
                        arr_12 [i_0] [i_0] [i_0] [9] = ((-(arr_11 [0] [i_0 + 1] [i_2] [i_3] [i_1])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_17 = (~-19);
                    arr_18 [i_0] [i_5] [9] [i_4] = (arr_11 [i_0] [i_4 + 1] [i_4] [i_5] [i_5]);
                    var_18 = (arr_11 [i_0 - 1] [i_0] [i_0] [1] [i_5]);
                }
            }
        }
        var_19 = (min(var_19, ((((arr_16 [i_0 + 1] [17] [16] [i_0 - 1]) & (arr_10 [i_0] [8]))))));
        var_20 = (min(var_20, var_0));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_23 [i_6] = (((((var_10 ? (arr_21 [i_6]) : (arr_21 [i_6])))) ? (((var_6 ? var_8 : (arr_16 [16] [i_6] [i_6] [i_6])))) : (max((12060566850618644990 / 754577599), (arr_21 [11])))));
        arr_24 [i_6] = min(var_6, (arr_13 [i_6] [i_6] [i_6]));
    }
    for (int i_7 = 3; i_7 < 18;i_7 += 1)
    {
        var_21 -= var_8;
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {
                    arr_33 [i_9] [10] [i_7 + 1] = 1099511627775;
                    arr_34 [i_9] [i_8] [i_7 + 2] |= (min((arr_17 [i_9] [i_7 - 3] [i_7 - 3]), 5828110374456904288));
                    var_22 = (max(((max((~var_9), ((139 ? 3540389690 : 244))))), (((arr_31 [i_7 + 1] [i_7 - 3] [i_8 + 1] [i_8 - 1]) ^ (arr_31 [i_7 - 1] [i_7 - 1] [i_8 - 3] [i_8 - 2])))));
                    var_23 = ((((max((arr_31 [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_7 + 2]), (-32767 - 1)))) ? ((~(arr_9 [i_7 + 2] [i_8 - 1]))) : (arr_16 [i_8 - 1] [i_7 - 2] [i_7] [i_7 - 3])));
                }
            }
        }
    }
    var_24 = var_15;
    var_25 = ((var_11 ? ((max((max(var_10, var_8)), -32767))) : 18446742974197923841));
    #pragma endscop
}
