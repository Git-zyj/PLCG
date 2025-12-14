/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (~((1488525485371139246 ? 10072836142497026035 : -1)));
    var_19 = (min(var_19, var_1));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] &= (((!var_4) ? (arr_1 [i_0]) : ((((var_0 ? (arr_0 [i_0]) : (arr_1 [18]))) * -1342360137663146086))));
        var_20 += (9635036987649536760 ^ 7616103811478603243);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = max(9223372036854775807, 6614337988391202559);
        var_21 *= 9223372036854775807;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_22 += (((arr_9 [i_1] [i_3]) || (((~(arr_8 [i_1]))))));
                    arr_11 [i_2] [i_1] = (((!0) ? (arr_7 [10] [5] [i_1]) : ((((!(arr_4 [i_1])))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_14 [2] [i_2] [i_2] [i_2] = arr_0 [4];
                        var_23 = ((var_16 != (!11287104056254250943)));
                        arr_15 [i_1] [i_2] [7] [i_2] [i_3] [15] = arr_3 [i_2] [i_3];
                    }
                    arr_16 [i_3] [i_2] [i_2] [8] = (arr_10 [i_1] [i_2] [i_2] [i_1]);
                    arr_17 [i_2] [i_2] = ((((~(arr_13 [i_3] [i_2] [i_1]))) > (((((~(arr_10 [i_1] [i_1] [19] [5])))) ? ((-(arr_9 [i_1] [i_2]))) : (arr_3 [10] [0])))));
                }
            }
        }
        var_24 = (min(var_24, (((((!(arr_0 [i_1]))) || ((((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])))))))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_25 -= (11832406085318349047 == 2305842734335787008);
        arr_20 [i_5] = (((arr_0 [i_5]) ? (((arr_0 [i_5]) ? (arr_0 [i_5]) : 10830640262230948375)) : (1717313979740665853 == 6614337988391202556)));
    }
    var_26 = max(((var_0 ? var_8 : ((var_9 ? var_11 : var_10)))), var_3);
    #pragma endscop
}
