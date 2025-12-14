/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = max(var_9, ((((1991282245 ? var_6 : 1991282270)) >> (((var_10 * -30759) - 607553948)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((!(((((arr_2 [i_0 + 2] [i_1]) != 15)))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 -= (((-144728822 / ((var_1 ? var_0 : 3075384843297485129)))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_15 *= var_9;

                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            var_16 = ((15 >= (((((max(2303685051, 2303685049))) ? (arr_5 [i_4] [i_1]) : ((max(var_1, var_1))))))));
                            arr_11 [i_0] [i_0] [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0] [14] = (!0);
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] = ((!(~1391667823)));
                            arr_17 [i_0] [i_0] [i_2] [1] = (arr_0 [i_1 + 1]);
                            arr_18 [i_0] [11] [i_0] = (((((-(arr_6 [i_0 + 2] [i_0 + 1] [i_1 + 1] [i_1 - 1])))) ? var_10 : (max(8, 3507751795))));
                        }
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            arr_21 [i_0] = (arr_13 [i_0] [i_1] [i_0] [i_3] [i_0] [i_1] [i_2]);
                            var_17 = ((-((var_8 >> ((max(var_3, var_6)))))));
                            var_18 = (max(var_18, (((((((var_4 ? 24 : 3076913777443182802)))) ? (((((((arr_13 [21] [21] [21] [21] [i_1] [12] [i_1]) ? var_4 : (arr_20 [4]))) <= (max((-32767 - 1), 3239360655)))))) : ((((max(-8012393688571640863, (arr_4 [i_0] [i_1] [0])))) ? var_6 : ((-18 ? var_2 : (arr_6 [i_0 - 3] [i_1] [i_0] [i_0]))))))))));
                        }
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            arr_26 [i_0] [i_1] [i_1] [i_3] [i_7] = (min((209 >> 15), ((var_0 * (!-426954393017821352)))));
                            var_19 = (min(var_19, (((-(max(((38 >> (var_5 - 3879680003))), ((~(arr_19 [i_0] [i_3] [i_2]))))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((((((-(min(-8012393688571640863, (arr_15 [i_0 + 2] [i_0 - 3] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_8] [i_8])))))) ? var_9 : (((min((!var_4), ((var_0 || (arr_3 [11] [i_1]))))))))))));
                                var_21 |= ((((min((arr_0 [i_2]), var_10))) >> (var_2 - 8482793972570423727)));
                                var_22 = arr_15 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_8] [i_0] [i_1 + 1];
                                var_23 = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((+((-4129648971317929013 ? (0 || -1391667823) : -285180924))));
    #pragma endscop
}
