/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_10 ^= var_7;
                            arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [i_1] [i_3] = ((+(((arr_10 [i_0] [7] [3] [7] [i_1] [i_1]) % (((var_3 - (arr_4 [i_3]))))))));
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_1] = (!124);
                        }
                    }
                }
                arr_13 [i_1] = (((((!(arr_10 [i_0 - 2] [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])))) * (((730576621 || var_6) ? (!91) : -106))));
                var_11 = (min(var_11, (((((max(((var_9 ? var_7 : 82)), -89))) ? ((var_0 ? var_6 : (((var_6 || (arr_8 [i_0] [i_1] [i_0] [i_1])))))) : (arr_7 [i_0 - 1] [i_0]))))));
                var_12 = ((((((var_8 ? 91 : var_6)))) ? ((((((arr_6 [i_0] [i_1] [i_0] [i_0]) || (arr_7 [i_0] [i_0])))) % -9641)) : 0));
                var_13 ^= ((126 ? (max(13524508633356417732, 77)) : (92 % var_9)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_27 [i_7] = max((arr_26 [i_4] [i_5] [i_6]), (((~35255) ? 2080786955 : var_8)));
                            arr_28 [i_4] [i_5] [i_6 - 3] [i_7] = (max(13524508633356417735, (62456666 || var_3)));
                            arr_29 [i_4] [i_4] [i_5] [i_6] [i_7] = ((((((((arr_25 [i_7] [i_5] [i_5 + 1] [i_5] [i_5] [i_4]) ? (arr_21 [i_4]) : var_6)) % var_1))) ? ((var_7 ? ((var_9 % (arr_15 [i_4]))) : ((-757333040 ? -106 : 48333)))) : (arr_23 [i_4] [13] [i_4] [i_4])));
                        }
                    }
                }
                arr_30 [i_4] = var_5;
                var_14 -= (((0 ? 30280 : 32764)));
            }
        }
    }
    var_15 |= -116;
    #pragma endscop
}
