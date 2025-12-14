/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 = 67108863;
        arr_2 [i_0] = ((var_9 + (arr_1 [i_0])));
        var_13 = var_4;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_14 = (arr_0 [i_0 + 4]);
            arr_5 [i_0] = -27591;
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_15 = (max(var_15, (((((((!(arr_0 [i_0 + 2]))))) ^ ((((8997762186150793140 / (arr_0 [i_3]))) + (max(8997762186150793138, 55315)))))))));
                        arr_15 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [3] = var_10;
                        arr_16 [i_0 + 2] [10] [14] [i_4] |= ((-(((-730034656 < (((67108887 >= (arr_10 [i_3])))))))));
                    }
                }
            }
            var_16 = ((-((7375285795193339497 ? (arr_3 [1] [i_2]) : ((9448981887558758475 ? (arr_4 [1] [i_2]) : var_0))))));

            /* vectorizable */
            for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_17 = (((arr_1 [i_0]) | 40));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_18 = (max(var_18, (arr_4 [i_2 - 1] [i_6])));
                            var_19 = (((arr_11 [i_0] [i_0] [i_0 - 1] [i_0 + 2]) || (arr_22 [i_0] [i_7 + 1] [i_2 - 1] [i_6] [i_7])));
                        }
                    }
                }
                arr_24 [i_0] [i_2 + 1] [1] [14] &= ((var_2 / (arr_19 [10] [10])));
            }
            for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
            {
                arr_27 [1] |= ((~(((min(9448981887558758475, var_6)) >> 3))));
                arr_28 [14] [i_2] [1] &= ((11 ^ (((arr_7 [i_0 + 4] [i_0] [i_8 - 1]) << (-6082 + 6108)))));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_31 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((((var_5 ? var_1 : (arr_10 [i_0]))) >> (((((((arr_10 [i_0]) + 2147483647)) << (((((arr_11 [i_9] [i_0] [i_0] [9]) + 12970)) - 2)))) - 2147461137))))) : (((((var_5 ? var_1 : (arr_10 [i_0]))) >> (((((((((arr_10 [i_0]) + 2147483647)) << (((((((((arr_11 [i_9] [i_0] [i_0] [9]) + 12970)) - 2)) + 8633)) - 10)))) - 2147461137)) + 632)))));
                arr_32 [i_0] = (arr_19 [i_0] [i_0]);
            }
            var_20 = (max(var_20, (((!((min(var_9, var_3))))))));
            var_21 |= ((((((arr_14 [i_0] [i_0 + 4] [10] [i_2]) ? ((min(var_8, (arr_10 [2])))) : ((var_0 + (arr_12 [0])))))) ? ((min((((1 == (arr_29 [i_0 - 1] [i_0] [i_0] [i_0])))), ((8997762186150793140 ? (arr_19 [6] [6]) : 969921096))))) : (((arr_26 [2]) & (arr_4 [i_0 + 1] [i_2])))));
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            arr_35 [i_0] [i_0] [i_0] = var_11;
            var_22 = (max(-5, 40));
            arr_36 [i_0] = (((((min(var_11, (arr_26 [i_0]))) >= (((((arr_19 [i_0] [i_10]) >= (arr_14 [i_10] [i_0] [i_0] [i_0 + 2]))))))) ? ((((arr_30 [i_0] [i_10] [i_10]) ? var_5 : (arr_18 [1] [i_10] [9] [5])))) : (min((min(var_6, 9448981887558758475)), (arr_23 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_0 + 4])))));
        }
        var_23 = (max(var_23, (((((((min((arr_23 [0] [i_0] [10] [10] [i_0] [i_0 + 2]), var_11))) ? (min(var_3, var_5)) : ((var_7 ? var_7 : var_5)))) > (((((min(var_1, 2604443529115937293)) < (!var_7))))))))));
    }
    var_24 = (max(var_6, var_7));
    #pragma endscop
}
