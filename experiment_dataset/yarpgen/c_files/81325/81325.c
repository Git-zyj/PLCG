/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_7 ? var_4 : var_17));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((((((arr_1 [i_0 - 2] [i_1 + 2]) == var_19))) / (((var_11 >= (arr_3 [i_0])))))))));
                arr_7 [i_0] [i_1] = (arr_2 [i_0] [i_0]);
                arr_8 [i_1] [2] [i_1] = (((arr_6 [i_0 - 3] [i_0 - 3]) ? (arr_6 [i_0] [i_0]) : (arr_0 [0] [i_0 - 2])));
                var_22 = (max(var_22, ((((((-((2711 * (-32767 - 1)))))) & (((arr_1 [i_0 - 2] [i_0 - 3]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_1 [i_0 - 1] [i_1 + 2]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_23 = ((((max((arr_10 [i_1]), var_16))) ? ((var_18 ? var_14 : 195)) : ((((!0) == (((arr_3 [i_3]) ? 0 : 70368744177663)))))));
                                arr_17 [i_1] = ((((((((arr_11 [i_0] [i_1]) && 5326003220359986167)) ? ((3378662725 << (2535445957026562344 - 2535445957026562324))) : var_5))) ? -15 : ((((arr_5 [i_1]) == (min((arr_3 [i_2]), var_9)))))));
                                var_24 |= ((((var_15 ? (((arr_3 [i_0]) ? 41 : (arr_3 [i_4 - 1]))) : 1)) ^ ((~(arr_16 [i_2])))));
                                var_25 = (max(var_25, (max((arr_1 [i_0 - 1] [i_0 - 1]), ((((arr_1 [i_0] [i_1]) > 13120740853349565449)))))));
                                var_26 |= ((((max((arr_15 [i_2] [i_3] [i_2] [i_1] [i_2]), 189))) >= (((max(var_14, (arr_0 [i_1 + 1] [i_1 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
