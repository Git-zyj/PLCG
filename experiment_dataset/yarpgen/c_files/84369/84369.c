/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = -22020;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_15 = (-3032934770586086268 && -1892196063);
                        var_16 = (~3032934770586086258);
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        var_17 |= (((var_1 * var_9) / ((-3254 ? var_13 : 6609469901602316140))));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_18 = (((((arr_15 [i_0] [i_1] [i_2]) < var_7)) ? (arr_0 [i_0]) : 1));
                            var_19 *= ((17024 >= var_11) & var_0);
                            arr_18 [i_4] [i_1] [i_1] = (51 == -6609469901602316138);
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_20 = ((arr_10 [i_0] [i_2] [i_2] [i_6]) ? (arr_10 [i_0] [i_1] [i_0] [i_6]) : (arr_10 [i_0] [i_0] [i_2] [i_6]));
                        var_21 = ((!((((var_14 + 9223372036854775807) >> (var_5 + 1625303983))))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 18;i_9 += 1)
            {
                {
                    arr_34 [2] [i_8] [16] [16] = ((-(arr_0 [i_7])));
                    var_22 = (min(var_22, ((min(1, 60784)))));
                }
            }
        }
    }
    #pragma endscop
}
