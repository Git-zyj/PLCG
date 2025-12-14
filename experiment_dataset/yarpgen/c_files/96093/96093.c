/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((40394 % (~9223372036854775807))))));
    var_12 = ((((((!var_2) | ((-717029617 ? var_0 : 998))))) > ((766849871737988932 ? (max(2511038259153053057, (-2147483647 - 1))) : ((1 ? 998 : 766849871737988935))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [7] [i_3] = ((0 ? ((17679894201971562681 | (arr_5 [i_0]))) : -717029638));

                            for (int i_4 = 3; i_4 < 14;i_4 += 1)
                            {
                                var_13 += var_7;
                                var_14 = ((((!(arr_5 [i_0]))) ? (((!((((arr_13 [i_0] [i_3]) ? 40942169 : 10468079006715735711)))))) : (((arr_12 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4] [i_4]) ? (max(var_10, 1)) : (arr_1 [1] [i_0])))));
                                arr_14 [i_0] = (((var_7 & 1) ? (((arr_12 [i_0] [i_4 - 3] [i_4 + 2] [i_4] [i_4 - 1] [i_4 - 3]) ? var_6 : (arr_12 [i_2] [i_4 - 3] [12] [i_4] [i_4 - 2] [i_4 - 1]))) : (((-2147483641 ? 65069 : var_7)))));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_15 = (((((var_10 ? (arr_5 [i_0]) : (arr_5 [i_0])))) ? (((max(9676323283261316773, var_0)) + (((1 ? (arr_11 [i_0] [i_1] [16] [i_0] [i_5]) : -6892))))) : ((((var_6 ? (arr_6 [i_5]) : var_1))))));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_5] = max(((((-969578174 ? var_4 : 3165875542)))), (arr_0 [i_1] [i_0]));
                                arr_18 [i_0] [i_1] [i_5] = ((!(3165875560 ^ 67108863)));
                                var_16 &= 977;
                                var_17 = (max(969578174, (((arr_8 [i_0] [i_1]) ? (((944 ? 41070 : 41070))) : var_6))));
                            }
                        }
                    }
                }
                var_18 = (((-(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
            }
        }
    }
    #pragma endscop
}
