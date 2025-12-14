/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 *= ((-(arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_3] [i_0] [i_0] = ((((((517985167744630657 >> (var_8 - 1587528621))) >> (((((-1058309580 + 2147483647) >> (-235920581 + 235920598))) - 8264))))) ? (min(93, 9223372036854775795)) : (128 | 55416));
                            var_11 = ((-(((((arr_7 [i_1]) & -831839564923457284)) ^ (arr_0 [i_0] [i_0])))));
                        }
                    }
                }
                var_12 = 142;
                var_13 = (min(var_13, var_2));
                var_14 -= 9223372036854775791;
            }
        }
    }

    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_23 [i_4] = (~(max(var_2, (((-(arr_19 [i_4] [15] [i_4] [i_7])))))));
                        var_15 = (arr_22 [i_4] [i_7] [1] [1]);
                        var_16 = (30866 / 4);
                    }
                }
            }
        }
        arr_24 [i_4] = ((((((arr_14 [i_4 + 2] [i_4 + 2]) ? 92 : (arr_14 [i_4] [i_4 - 1])))) ? var_0 : (((((arr_17 [i_4 + 2] [i_4] [i_4 + 2]) ? 140703128616960 : (arr_19 [i_4 - 1] [16] [i_4] [i_4])))))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_17 ^= (arr_15 [i_8]);
            var_18 *= ((var_7 ? (((arr_26 [i_8] [i_8]) / (arr_14 [17] [i_8]))) : (((var_5 / (arr_14 [10] [12]))))));

            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_19 = (min(var_19, ((((arr_16 [i_8]) ? (((((arr_18 [i_8] [i_8]) + 2147483647)) >> (78 - 69))) : (22250 | 4092))))));
                var_20 = (((arr_27 [i_4 + 1]) ? (arr_27 [i_4 + 2]) : (arr_27 [i_4 - 1])));
                var_21 = (min(var_21, var_7));
            }
        }
        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {
            var_22 = ((((arr_29 [i_10] [i_4] [i_4] [1]) ? (((-259476952 / (arr_32 [i_4] [i_4])))) : (((arr_32 [i_4] [i_10]) ? var_7 : (arr_25 [i_4] [i_10]))))));
            arr_34 [i_4 - 1] [i_10 + 1] [i_4] = min(((((arr_20 [i_4 - 2] [i_4] [i_10 - 3] [i_10 - 3]) > var_5))), ((62 ? (max(33519, var_1)) : (arr_30 [i_4]))));
        }
        var_23 = (((((max(2, -2817803674151310633))) ? -600326306453214253 : (arr_32 [i_4 - 2] [i_4 - 1]))));
    }
    var_24 = (max(var_24, (((((min((-3034279656017930008 ^ var_0), 3220))) ? ((var_5 ^ (max(-822931160693750489, 13579863918552981363)))) : (((var_5 ? (((min(33495, var_5)))) : 8841697583761129547))))))));
    var_25 = (((((1 ? (((var_8 << (var_8 - 1587528638)))) : var_0))) ? -var_2 : -9223372036854775807));
    #pragma endscop
}
