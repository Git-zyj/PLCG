/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (1 / 93);
                var_17 = (arr_0 [3]);
                var_18 += ((((~(arr_1 [i_0]))) ^ (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((((1 & 1) < (~112)))) <= ((((((!(arr_11 [i_0] [i_1] [i_2] [i_3])))) == (1 ^ 1)))))))));
                                arr_13 [i_2] [i_4] [i_4] = (((arr_6 [0] [1]) && (arr_6 [i_0] [i_0])));
                                var_20 -= ((1 | (!6545370673370263106)));
                                var_21 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 += 14895;
    var_23 &= (1 / 14895);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_24 += (--1);
                var_25 = -42;
                var_26 = ((13129 / (arr_14 [i_6])));
            }
        }
    }
    #pragma endscop
}
