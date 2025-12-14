/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((max(((max(var_0, var_2))), (29835 - 238))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 = (max((max(((((arr_0 [i_3] [i_0]) / (arr_0 [i_0] [i_0 + 3])))), (arr_7 [i_1]))), (((18 <= ((max(1, 178))))))));
                            var_12 = (((((((min(35768, (arr_2 [i_3]))))) % 4611686018418999296)) < 41208));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_13 = var_2;
                                var_14 = (arr_11 [i_1] [i_0] [i_0] [i_0 + 1] [i_1]);
                                var_15 = 598;
                            }
                            var_16 = min(var_8, (-127 - 1));
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_17 ^= var_9;
                    var_18 ^= ((var_8 * 524032) ^ (((((arr_0 [i_0] [i_0]) || (arr_1 [i_0 + 2]))))));
                    arr_16 [1] |= 52;

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_19 = (((((var_4 ^ -4611686018418999296) + 9223372036854775807)) << (196 - 196)));
                        var_20 = (min(var_20, (((707886495279444075 - (arr_5 [i_6] [i_0 + 1] [i_0 + 1] [i_6]))))));
                    }
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_21 += ((65520 == ((min((max((arr_10 [i_0] [i_0] [i_1] [i_7] [i_1]), 20058)), (arr_20 [i_0 + 2] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_22 = (min((min((max((arr_21 [i_7] [i_8]), 46)), ((min((arr_9 [i_0] [i_0] [i_0] [i_0 + 3] [1] [i_0]), (arr_11 [i_7] [i_7] [i_7] [7] [i_1])))))), ((min((min(-707886495279444075, 65520)), (max(35701, -6018362816884487832)))))));
                                var_23 = (min((min(((max((-127 - 1), var_9))), var_8)), var_6));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_24 = (((arr_21 [i_0] [i_0]) & 65535));
                    arr_29 [i_1] [i_1] [i_1] = (arr_0 [i_10] [i_0]);
                }
                arr_30 [i_0] [4] |= (min(((min((arr_2 [i_1]), (arr_11 [i_0 + 2] [i_0] [i_1] [i_1] [1])))), (max(5730848129368409238, ((min(3, (arr_22 [i_0] [i_1] [i_0] [i_0]))))))));

                /* vectorizable */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    arr_33 [i_1] [i_1] [i_11] = (29835 & 61763);
                    var_25 = (((31 / -32554) || 57));
                    arr_34 [i_1] = (arr_15 [i_0] [i_0] [i_0 + 1]);
                    var_26 += (arr_22 [i_0] [20] [6] [i_11]);
                    var_27 = ((31 & (arr_12 [i_1] [i_0 - 1] [i_0] [17] [i_1])));
                }
            }
        }
    }
    var_28 = (min((max(var_0, (max(var_1, 42259)))), var_0));
    #pragma endscop
}
