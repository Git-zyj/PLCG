/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 5731;
    var_17 = (min(var_17, var_9));
    var_18 = (106 ? 0 : 4294967295);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (arr_6 [7] [i_1] [1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_19 = (--1);
                            arr_14 [i_0] [i_1] [6] = ((((1 ? (0 * 0) : ((((arr_9 [10]) ? var_11 : (arr_8 [i_0] [i_1] [i_2 - 1] [i_1])))))) & ((max((arr_5 [i_0] [1]), ((0 ? 0 : (arr_3 [i_0] [i_1] [i_1]))))))));
                            arr_15 [i_0] = (min((((min(8, 4294967295)) - (60601 - 860303987))), -1066208053));
                            arr_16 [i_0] [i_1] [i_0] [4] [i_1] = var_5;
                        }
                    }
                }
                arr_17 [i_1] [4] |= -84;
                var_20 = (min(var_5, ((((arr_9 [i_0 + 1]) >= (arr_13 [i_1]))))));
                var_21 *= (max(256, (min((~var_11), ((-(arr_0 [i_1])))))));
            }
        }
    }
    var_22 = -2052659250;
    #pragma endscop
}
