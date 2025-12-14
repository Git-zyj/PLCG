/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((min((max(var_13, var_1)), 27630)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_1] = 11367;
                    arr_10 [i_0 - 1] [i_1] [i_2] [i_0 - 1] = var_6;
                    var_15 = (((((max(11367, (arr_4 [i_0 - 1]))))) ? ((-(((arr_0 [i_1] [i_1]) + (arr_1 [i_0 - 1]))))) : (arr_2 [i_0 + 1])));
                    var_16 = (arr_6 [i_2]);
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_17 = (min(var_17, (arr_7 [i_1] [i_1])));

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_18 = (max((~var_9), (((arr_15 [i_0 + 1]) + ((var_13 << (((var_12 + 1439229256) - 24))))))));
                        arr_16 [i_0] [i_1] |= (min((--11367), ((-54 ? ((var_2 ? (arr_15 [i_4]) : 17)) : ((-(arr_7 [i_0 + 1] [i_0 + 1])))))));
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_19 = (arr_19 [i_0] [i_1] [i_5] [i_6]);
                            arr_23 [i_0] = ((min((~6015307239805258518), (arr_17 [i_0] [i_0]))) <= (((11370 << (((~var_8) - 3349989055))))));
                        }
                    }
                }
                var_20 ^= (min((max(3, 25)), ((((((arr_11 [9]) + var_0)) <= (((arr_13 [i_1]) ? (arr_15 [i_0]) : (arr_0 [i_0] [i_1]))))))));
                var_21 *= (max(var_12, ((31649 * (!18306008908162129821)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_30 [i_0] [i_1] [i_7] [i_8] = 10;
                            var_22 = (min(((max(239, 32767))), (arr_2 [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
