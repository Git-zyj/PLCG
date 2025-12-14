/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((4758396692787386131 & 18446744073709551607) >> (-4758396692787386131 + 4758396692787386132)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, (((((4758396692787386108 || (arr_8 [i_0] [i_1] [i_1] [i_1] [i_4]))) || ((!(arr_3 [i_0 - 1] [i_0 - 1] [i_4]))))))));
                                arr_16 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 3] &= 1;
                                var_13 = (max(((8991043912690706088 ? (~8991043912690706079) : -4758396692787386133)), -2078266391722444536));
                                arr_17 [i_3] [i_3] [i_3 - 2] [i_3 + 1] [i_3] = var_3;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_14 -= (min((((arr_9 [i_5 - 2]) * (arr_0 [i_6]))), (((!(((3 ? 4758396692787386133 : 216))))))));
                            var_15 *= ((min((((var_8 ? (arr_2 [i_6] [i_6]) : 37))), (arr_21 [i_6]))) != ((((min(var_0, var_1))))));
                        }
                    }
                }
                arr_23 [i_0 - 3] [i_0 - 3] [i_1] = ((~(((arr_22 [i_0] [i_0] [i_1] [i_1]) + ((18446744073709551615 - (arr_11 [i_0 - 3] [i_0] [i_1] [i_1] [i_1])))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_16 -= (((((arr_14 [i_8 - 3] [i_8]) ^ (arr_1 [i_0 - 2] [i_0 - 2]))) | (((arr_5 [i_0 - 4] [i_8 - 1]) ? (arr_1 [i_0 - 2] [i_0 - 4]) : (arr_14 [i_8 - 1] [i_8])))));
                            arr_29 [i_0] [i_1] |= (((((arr_25 [i_0] [i_1]) >= ((((!(arr_15 [i_0] [i_0] [i_7]))))))) ? (arr_3 [i_7 - 1] [i_8 + 1] [i_8]) : (arr_11 [i_0 + 1] [i_8 - 3] [i_8 - 1] [i_8] [i_8])));
                        }
                    }
                }
                arr_30 [i_0] = (((((4758396692787386133 ? ((var_1 ? (arr_20 [i_1] [i_1]) : var_3)) : ((((-4758396692787386123 >= (arr_24 [i_1])))))))) ? (arr_6 [i_0] [i_1] [i_1]) : var_5));
            }
        }
    }
    #pragma endscop
}
