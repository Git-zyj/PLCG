/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_19 *= var_13;
                arr_5 [i_1] = ((2047 ? -6011 : 29671));

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    var_20 ^= (!4294967280);
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((((min(1, -2032))) & ((((min(0, 4294967281))) ? (((-(arr_3 [i_2] [i_1])))) : (~2346936313)))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_21 = (min((max(2032, ((var_14 ? 32767 : -24096)))), ((-11694 ? 0 : (!-11694)))));
                    var_22 *= ((-11677 ? ((~(((arr_7 [i_0] [i_1] [i_3]) ? 15 : 216)))) : (~49)));
                    arr_12 [i_0] [i_3] [i_0] = ((((((~15) ? (~1560) : 28672))) ? 7295555496889815009 : 59));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_23 *= 12939;
                                arr_18 [i_0] [i_3] [i_4] [i_5] = ((-(arr_14 [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_24 = ((~((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) < -8997545057736631923)))));
                                var_25 ^= ((1 ? 32767 : 22309));
                                var_26 = (min(var_26, 0));
                            }
                        }
                    }
                    arr_26 [i_0] = ((132 ? 214 : 1));
                    arr_27 [i_0] [i_0] = 0;
                    var_27 *= (var_9 * -1309658266344790504);
                }
                arr_28 [i_1] [i_1] [i_0] = max(1, 22309);
            }
        }
    }
    var_28 ^= (min(var_14, var_13));
    #pragma endscop
}
