/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = ((-((((arr_0 [i_0] [i_0]) || 1445906249)))));
        arr_3 [i_0] [i_0] = ((30307 ? -30305 : var_6));
        var_17 -= (((((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ^ ((-1 & (arr_0 [i_0] [i_0]))));
        var_18 = ((((min((arr_1 [i_0]), var_4))) ? (min(2849061048, var_5)) : ((((((((-27078 + 2147483647) >> (-1 + 31)))) && ((min(18446744073709551614, var_9)))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 = (min(var_19, (((((-(arr_1 [i_1]))) / (min(var_0, (arr_1 [i_1]))))))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((((((1819595750 ? (arr_9 [4] [i_2] [i_5] [i_4 - 2]) : (arr_9 [12] [i_2] [12] [i_4 + 2])))) ? (arr_9 [1] [1] [i_3 - 1] [1]) : ((-(arr_9 [1] [i_4 + 2] [i_2] [1]))))))));
                            arr_15 [i_4] [i_2] [i_3] [i_4] [8] [i_2] = ((((-(arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]))) + var_11));
                            var_21 = (min(((var_7 ? -1 : (arr_4 [i_4] [i_5]))), var_9));
                            var_22 = (max(var_22, ((((-30313 * 0) < (arr_9 [12] [i_3 - 3] [i_3 - 3] [i_3 - 3]))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_23 -= (((((arr_5 [i_2] [i_6]) + 2147483647)) >> ((((~(65535 == var_9))) + 29))));
                            var_24 -= (((arr_8 [i_1]) < -3931118797174055231));
                            arr_23 [i_1] [i_2] [i_6] [i_7 + 1] [i_2] = min(((((max(var_7, 4201901841242727132))) ? (3389 || -1) : (arr_16 [i_7 + 1] [i_2] [i_6] [i_7]))), (arr_1 [i_1]));
                        }
                    }
                }
            }
            var_25 = (arr_21 [i_1] [i_1] [i_1] [i_2] [i_2]);
        }
        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            arr_27 [i_1] [i_1] = -30322;
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        var_26 = (min(((var_1 % (arr_13 [i_9 + 1] [i_9] [i_10] [i_10] [i_10 + 1]))), (arr_13 [i_9 - 1] [i_9] [i_10] [i_11] [i_10 - 2])));
                        var_27 += ((var_5 ? ((((((arr_13 [i_11] [i_11] [i_11] [i_11] [6]) * var_5))))) : (arr_28 [i_1] [i_1])));
                        arr_34 [i_10] [i_9 - 1] [i_10] [i_11] = ((((-(arr_4 [i_1] [i_1]))) ^ ((18446744073709551613 ? var_0 : (25041 && var_15)))));
                        var_28 = (arr_26 [i_1] [i_1] [i_1]);
                    }
                }
            }
        }
        var_29 = ((((min((arr_11 [i_1] [i_1] [i_1] [10]), (arr_25 [i_1] [i_1])))) ? 6104668874921826266 : var_3));
        arr_35 [i_1] [i_1] = (arr_6 [i_1]);
    }
    for (int i_12 = 2; i_12 < 20;i_12 += 1)
    {
        var_30 *= 38718;
        var_31 = ((8388607 ? (((arr_37 [i_12 + 2]) * (arr_36 [i_12 + 1]))) : (min(var_10, ((min(-6748, 61039)))))));
    }
    var_32 = (max(var_8, var_6));
    #pragma endscop
}
