/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_19 -= ((var_0 ? ((((max(var_6, (arr_0 [i_0 + 1])))) ? (~0) : var_0)) : (((arr_1 [i_0 + 3]) ? (arr_1 [i_0 - 1]) : 95))));
        var_20 = 101;
        var_21 = -1;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_22 = (min((((((var_14 ? var_5 : 32750)) <= (((arr_3 [i_1] [i_1]) ^ (arr_2 [i_1])))))), -var_2));
        var_23 += (arr_2 [i_1]);
        var_24 -= ((+(((arr_3 [i_1] [i_1]) ? 13801 : (arr_3 [i_1] [i_1])))));
        var_25 += ((((max(-32744, (arr_3 [i_1] [i_1])))) || (arr_2 [i_1])));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_7 [i_1] [6] [i_1] = (((((192 * (177 * var_14)))) ? var_8 : -105));

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_26 = (max(((var_0 >> (65521 - 65514))), (var_6 && var_3)));
                            var_27 = (min(var_27, ((min((arr_3 [i_4 + 1] [i_4 + 1]), (min(((~(arr_14 [1] [11] [11] [i_4] [i_4 + 1]))), (((!(arr_14 [i_1] [i_2] [i_3] [4] [4])))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_20 [i_1] &= ((-(((var_11 && (((1 ? (arr_2 [i_6 - 1]) : 10))))))));
                            arr_21 [i_6] [1] [i_3] [i_2] [i_6] = (((193 >> 1) <= var_1));
                            var_28 = (((((arr_9 [i_7] [i_3] [i_1] [i_1]) ? (var_6 > var_4) : -var_2)) < ((((-(arr_11 [i_1] [i_1] [i_1] [i_7]))) | 1))));
                            arr_22 [i_7] [i_6] [i_3] [i_3] [i_3] [i_6] [i_1] = 101;
                            arr_23 [i_1] [i_1] [i_6] = var_3;
                        }
                    }
                }
                arr_24 [i_3] = (((((((((arr_3 [i_1] [22]) ? var_5 : var_3))) ? ((max(152, var_1))) : (((arr_6 [i_1] [i_1]) ? -1307 : 116))))) ? (min(((max(var_12, var_16))), (((arr_15 [i_1] [i_2] [i_1] [18]) ? (arr_19 [i_2] [i_3]) : var_10)))) : ((((min(51006, var_10))) ? (~32759) : var_3))));
                arr_25 [i_1] [i_2] [i_3] = (-106 * 110);
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_29 = ((-1 ? 79 : ((217 ? -3228 : -120))));
                var_30 = (arr_4 [i_1] [13]);
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_31 ^= (((arr_27 [i_9] [i_9]) ? (-32767 - 1) : (((32761 && (arr_30 [1] [1]))))));
        var_32 = var_10;
        var_33 = var_5;
    }
    #pragma endscop
}
