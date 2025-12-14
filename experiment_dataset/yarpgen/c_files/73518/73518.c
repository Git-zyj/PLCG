/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((((max(var_6, ((((arr_2 [i_1]) || 5866048359461723071))))))) >= ((12580695714247828545 ? (15 | 12580695714247828553) : -17)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = (((((max((arr_5 [i_0] [i_3] [i_3 + 1] [i_0]), (arr_5 [i_0] [i_1] [i_3 - 2] [i_3]))))) > 1));
                            arr_8 [i_1] [i_1] [i_1] [i_1] [i_0] = (24795 || 65521);

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_19 = 109;
                                arr_12 [i_4] [i_3 + 2] [i_2] [i_1] [i_0] = (((arr_6 [i_0] [i_1] [i_3 - 2]) ? (arr_6 [i_0] [i_1] [i_3 - 2]) : 15));
                                var_20 = ((var_7 >= ((((arr_1 [i_0]) ? var_4 : (arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [i_4]))))));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] = (arr_3 [i_3] [i_1]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_21 *= -18;
                                var_22 = (min(var_22, ((((arr_1 [i_0]) ? 24811 : (arr_1 [i_0]))))));
                                var_23 = var_0;
                                arr_17 [i_2] [i_1] [7] [i_2] [i_2] [i_0] |= (((4294967232 / 3690590422709955180) ? var_9 : (((arr_4 [i_0] [i_1]) ? 12580695714247828541 : 824280520023979215))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                var_24 -= 5866048359461723071;
                                arr_21 [i_0] [i_0] [i_0] &= ((arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 3]) ? (arr_7 [i_0] [i_0] [i_2] [i_3 - 1] [i_3] [i_6]) : 24811);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
