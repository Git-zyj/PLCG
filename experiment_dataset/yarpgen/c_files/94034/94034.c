/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_1));
    var_16 |= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [13] [0] [i_2] [i_3] = arr_1 [i_1] [i_2];
                            arr_12 [i_0] [i_1] [i_0] [i_3] [i_2] [i_3] = (((((((arr_1 [i_0] [i_1]) <= (arr_6 [i_1] [i_1 + 2] [6]))))) < ((52 / (max((arr_10 [i_0] [i_1 + 1] [i_2] [i_3]), var_5))))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_17 -= 1962090257437202190;
                                arr_16 [i_0] [i_1 + 2] [i_2] [i_3] [i_4] [i_3] = arr_8 [i_0] [i_1] [i_1] [i_1 - 1];
                                var_18 = 1962090257437202204;
                                var_19 |= ((((min(31744, (arr_14 [4] [i_1 - 1] [i_2] [i_4] [i_4] [4] [i_0]))))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_20 ^= (((1962090257437202160 ? ((-1962090257437202191 ? 4 : 1962090257437202200)) : 1962090257437202204)) % (arr_4 [i_2] [17]));
                                var_21 = ((((((22480 == (max((arr_9 [i_0] [i_2] [i_5]), 618)))))) < (arr_13 [i_5] [i_5] [i_5] [i_5] [1] [i_5] [i_5])));
                                arr_19 [1] [i_1 - 1] [i_1 - 1] [i_3] [i_1] [i_1] = (((-(arr_2 [i_0]))));
                                var_22 = ((((max((-1962090257437202187 == 1152921504472629248), (arr_7 [i_1 + 2])))) ? (arr_7 [i_5]) : 1));
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 18;i_6 += 1)
                            {
                                var_23 = (min(var_23, (((var_13 + (arr_2 [i_1 + 1]))))));
                                arr_22 [i_0] [i_0] [i_2] [7] [i_3] [i_6] = var_5;
                                var_24 = (((91 ? 1536133992 : -1152921504472629249)) == var_7);
                                var_25 = arr_10 [i_1 - 1] [i_6 + 2] [i_6 + 2] [i_6 + 2];
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 19;i_7 += 1)
                            {
                                arr_27 [i_3] = (var_13 / 146);
                                arr_28 [i_0] [i_2] [i_1] [14] [i_7 + 1] &= (arr_8 [i_0] [i_0] [i_2] [i_0]);
                            }
                            var_26 = 1;
                        }
                    }
                }
                var_27 = (arr_25 [i_0] [i_1]);
                var_28 = ((arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_0]) / 6640828866113773337);
            }
        }
    }
    var_29 *= var_13;
    #pragma endscop
}
