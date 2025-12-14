/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((823961876 & 20078) - 823961876));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_20 = (max(var_20, ((((3471005429 & 3471005415) ? (((220 << (62374 - 62370)))) : (((arr_1 [i_1]) + var_7)))))));
            arr_6 [i_0] [11] = ((((var_9 && (arr_1 [i_0]))) ? (((!(arr_3 [14] [21])))) : (((arr_3 [16] [1]) ? var_14 : (arr_1 [i_0])))));

            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                arr_11 [i_0] = (var_13 > var_3);
                var_21 = ((~((var_10 ? 3162 : var_0))));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                arr_15 [i_0] = ((~(~var_8)));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_20 [0] [17] [1] [i_0] [16] [7] [13] = (!((((arr_10 [21] [14] [1]) ? var_16 : (arr_12 [i_0] [1] [1])))));
                            arr_21 [12] [12] [1] [i_0] [1] [1] [9] = ((((var_6 > (arr_13 [12] [5])))));
                        }
                    }
                }
                arr_22 [8] [3] [11] [i_0] = (((823961853 / (-127 - 1))));
                var_22 = (min(var_22, ((((!3471005420) << ((((var_1 ? var_5 : var_7)) - 1275344479)))))));
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_23 &= (50383 >= 3471005443);

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_24 = (max(var_24, (((+(((arr_24 [i_1] [18]) / 881245183)))))));
                    var_25 = (((!var_0) ? (((20078 > (-9223372036854775807 - 1)))) : (!var_8)));
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    {
                        var_26 = (min(var_26, ((((530548794 | 1550272368957799733) << ((var_9 ? (arr_31 [i_1]) : var_4)))))));
                        var_27 = (((~(arr_8 [17] [1] [9] [17]))));
                        var_28 |= (~((var_8 << (15152 - 15133))));
                    }
                }
            }
            arr_32 [i_0] [20] [8] = ((((((arr_8 [3] [15] [4] [2]) > (arr_16 [18] [11] [18] [0])))) >> (!20047)));
        }
        arr_33 [i_0] = (((!0) % (var_16 || var_6)));
    }
    var_29 = (max(var_29, (((var_12 || (((((var_19 ? var_5 : var_14))) || (var_16 ^ var_4))))))));
    #pragma endscop
}
