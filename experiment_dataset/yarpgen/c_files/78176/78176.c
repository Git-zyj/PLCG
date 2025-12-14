/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = ((((((arr_1 [i_0 + 2] [i_1 - 1]) ? var_6 : (arr_1 [i_0 + 2] [i_1 - 1])))) ? (((var_6 + 9223372036854775807) >> (((arr_1 [i_0 + 2] [i_1 - 1]) - 392846190)))) : -29));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_22 *= 71;
                                var_23 += (max((((~(((arr_12 [i_0] [i_0] [i_0] [i_3] [i_3]) ? var_11 : var_5))))), (min(((-12 ? 11408381667340659599 : 11408381667340659592)), ((((arr_11 [i_0] [i_1] [5] [5] [18]) ^ (arr_5 [i_0 + 2] [i_0 - 1] [3]))))))));
                                var_24 *= (min((min((arr_4 [i_0] [1]), (((arr_10 [i_0] [4] [i_0] [i_0] [i_4 + 2]) >> (((arr_2 [i_3 + 2]) - 76)))))), var_14));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_25 = ((((((var_19 ? var_10 : var_15)) ? (((arr_2 [i_0]) ? 29943 : -9223372036854775801)) : (((var_16 ? -24284 : var_19)))))));
                                arr_18 [10] [i_1 - 1] [5] [5] = (min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]), ((max((((arr_1 [i_0] [11]) ? -930474453 : 1817109662)), var_0)))));
                                arr_19 [i_6] [i_1] [i_2] [i_1] [i_0] = (min(((min((arr_17 [i_1]), var_9))), ((13757754646114797482 ? 17 : -2147483627))));
                                var_26 = ((max((arr_11 [i_5] [i_5 + 1] [i_5] [i_5] [i_5 - 1]), var_5)));
                            }
                        }
                    }
                    var_27 += (((1041838158 * 14854051533075970327) % (((-(arr_14 [i_0 + 2] [i_0 - 1] [i_2 + 1] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
