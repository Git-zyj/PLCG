/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_7 ? ((~((var_13 ? var_16 : 39159)))) : var_2));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_19 = (max(var_19, ((((arr_3 [i_0] [i_0] [i_0 + 1]) ? var_5 : (((arr_2 [i_2]) ? 11666 : (arr_2 [i_2]))))))));
                arr_8 [i_0] [11] [i_1] = ((~(arr_7 [7] [i_1] [i_2] [i_0 + 2])));
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_20 = ((15 ? 255 : 17592186044415));
                var_21 = (arr_4 [i_0 - 2]);
                arr_13 [i_1] [i_1] [i_3] [i_3] = ((((!(arr_3 [i_3] [i_1] [i_0]))) ? (arr_3 [i_0] [i_1] [i_3]) : -273));
                var_22 = 255;
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_23 = (((arr_18 [i_0 + 2] [i_0 + 2] [i_4] [i_5]) << (((arr_18 [i_0 + 1] [i_0 + 1] [i_5] [i_5]) - 63))));
                        var_24 -= (((arr_15 [i_0 + 1] [i_0] [i_4]) ? (arr_1 [i_0 + 2]) : (arr_0 [i_0] [i_1])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_25 = (((arr_12 [i_0] [i_6] [i_1]) ? (arr_12 [i_0 + 1] [i_6] [i_1]) : (arr_16 [i_0 + 4] [i_0] [i_0] [i_1])));
                        var_26 -= arr_17 [i_0] [8] [8] [i_7] [i_7] [i_1];
                        var_27 = (max(var_27, (arr_3 [i_0] [i_0 + 3] [i_0 + 3])));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_32 [4] [i_8] [4] [i_8] [i_8] [4] |= (!-34);
                        var_28 = 7266456745501607987;
                        var_29 = var_3;
                    }
                }
            }
            var_30 &= var_0;
            var_31 = (arr_0 [i_0] [i_0]);
        }
        var_32 += ((arr_21 [6]) - (arr_21 [4]));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_36 [i_11] = ((2031616 ? 8975144377163005012 : -40));
        arr_37 [i_11] [i_11] = (arr_9 [i_11] [i_11]);
    }
    #pragma endscop
}
