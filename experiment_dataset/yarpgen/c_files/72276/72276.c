/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_19 = ((arr_9 [i_0] [i_2]) ^ var_8);
                            arr_10 [i_0] [i_1 - 1] [i_2] [i_3 + 1] = (((1661966255 == 1819274363774097475) < (min(65535, 10))));
                        }
                    }
                }
                var_20 *= ((((max((arr_1 [i_1]), (2498176684 + 5)))) ? var_18 : (arr_5 [i_0] [6] [i_1 + 1] [0])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        {
                            var_21 |= var_13;
                            var_22 &= (arr_2 [8] [i_1]);
                            arr_17 [i_0] [i_0] = (arr_3 [i_4] [i_1 - 1] [i_4]);
                            var_23 &= var_5;
                        }
                    }
                }
                var_24 = (min(var_24, ((((!7) == 1072693248)))));
            }
        }
    }
    var_25 = ((~((1 - (1056000017 && var_16)))));
    var_26 = var_13;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_27 = -47;
                            arr_26 [i_6] [6] [i_8 + 1] [i_9] [11] = ((!(((((arr_20 [i_7 + 1] [i_9]) | (arr_22 [i_7 + 1] [i_8 + 1] [i_9])))))));
                            arr_27 [1] [i_7] [i_8] [6] [i_7] [i_9] = min((-32767 - 1), ((((max(var_12, var_6))) ? ((max(-110, var_16))) : ((29935 ? (arr_23 [i_9] [i_6]) : (arr_24 [i_6] [i_6] [1] [i_6]))))));
                            var_28 = ((47985 ? 10 : 1558994080));
                            var_29 &= ((39 ? 1 : 1015696795));
                        }
                    }
                }
                arr_28 [i_6] [i_6] = (((((5071 ? -71 : 1744971690))) ? (arr_24 [i_7] [i_7 - 1] [i_6] [i_6]) : 1));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_30 *= (((arr_34 [i_6] [i_7 + 1] [2] [10]) ? 19950 : 1));
                            var_31 &= ((!((!(((var_6 >> (var_17 - 6630816448268441087))))))));
                            var_32 = (arr_30 [5] [5] [8]);
                            var_33 = (min(var_33, (((58610 ? -2023833843 : ((max(var_15, (arr_23 [i_7] [i_10])))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
