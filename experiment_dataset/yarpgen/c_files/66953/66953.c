/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_1] = arr_1 [i_0];
            var_14 = (((max(((-1 - (arr_5 [16] [i_0] [i_0]))), (((arr_1 [i_1]) ? -60 : (arr_3 [i_0]))))) * ((min((((arr_0 [i_0]) != (arr_2 [i_1]))), (!126))))));
            arr_7 [i_1] [i_1] [i_1] = (arr_1 [i_1]);
        }
        var_15 = (arr_1 [i_0]);
        var_16 = ((((max(-7, ((max((arr_0 [i_0]), (arr_3 [i_0]))))))) ? -108 : (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_17 = (((((arr_1 [i_0]) ? var_3 : (((1 << (-43 + 52)))))) != (arr_3 [i_0])));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_11 [i_2] = (arr_8 [i_2] [i_2]);
        var_18 = (max(var_18, (!123)));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_19 = (arr_14 [i_4]);
                var_20 = (!1);
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_23 [i_5] [i_5] [1] = ((min((arr_21 [i_5] [i_5] [i_5]), (((arr_22 [i_3] [i_3] [i_5] [i_6]) / (arr_18 [i_3] [i_3]))))) >= (((((min(4747670785951330261, 1730370737))) ? -19 : ((min((arr_17 [i_6] [i_6 - 3]), (arr_16 [i_6] [i_5]))))))));
                            arr_24 [i_5] [i_4] [i_5] [i_6] = var_5;

                            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                            {
                                var_21 += ((!(~-32748)));
                                var_22 ^= (arr_17 [i_3] [i_3]);
                                var_23 = (min(var_23, ((max((((+(min((arr_22 [i_3] [i_3] [i_5] [i_6]), (arr_19 [4] [i_3])))))), (max((((-43 * (arr_18 [i_5] [i_3])))), 1)))))));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                            {
                                arr_29 [i_5] [i_4] [i_5] = (arr_12 [i_4] [i_4]);
                                var_24 = arr_18 [i_8] [i_4];
                                arr_30 [i_3] [i_3] [i_5] [i_5] = (((arr_22 [i_3] [i_3] [i_6] [i_8]) ? (((arr_19 [i_5] [i_4]) ? var_12 : 67)) : var_9));
                            }
                        }
                    }
                }
                var_25 = ((!(((-((min((arr_20 [i_4] [2] [11] [14]), (arr_18 [i_3] [i_4])))))))));
            }
        }
    }
    #pragma endscop
}
