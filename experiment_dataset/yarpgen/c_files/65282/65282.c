/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [8] [i_2] = ((-((((~199) >= 18446744073709551615)))));
                            arr_11 [i_0] [i_0] |= (((((var_0 & ((((arr_2 [i_0] [i_1] [i_0]) ? 1 : (arr_6 [i_0]))))))) ? ((-(!193))) : (arr_7 [i_0] [i_0] [i_3 - 1] [i_0])));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    arr_14 [i_4] [i_4] [i_4] = (arr_8 [i_4]);

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_17 [i_4] [i_4 - 3] [i_4] = (((arr_16 [i_4 - 2] [i_4 - 2] [i_5] [i_4]) & (((arr_0 [i_0]) / 255))));
                        var_17 = (max(var_17, ((((57 - var_16) || (~111))))));
                        arr_18 [i_4] [1] [i_1] [i_1] [1] [i_5] = -70;
                        var_18 = ((-((10 ? 116 : (arr_8 [i_4])))));
                        arr_19 [i_4] [i_4] [i_1] [i_4] = (((arr_6 [i_4]) ? 8589934591 : (((-(arr_7 [i_0] [4] [i_0] [i_4]))))));
                    }
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        var_19 = ((4142339423 * (arr_9 [i_1] [i_4])));
                        arr_22 [i_4] = (((((var_0 >= (arr_4 [i_4] [i_6])))) & ((((arr_15 [i_0] [i_1] [i_0] [i_4 - 3] [i_6 - 3] [i_6]) || 1)))));
                    }
                }
                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    var_20 = -var_8;
                    var_21 *= (((((arr_2 [i_0] [i_0] [i_7 - 1]) ? (arr_2 [i_1] [i_1] [i_1]) : (arr_13 [i_0])))) || (arr_13 [i_0]));
                    var_22 = ((~(3241 - 4442)));
                }
            }
        }
    }
    var_23 = ((((((~var_9) ? ((152627872 ? -8589934608 : 1)) : ((94 ? 18446744073709551605 : 75))))) ? var_11 : ((((20510 ? var_3 : 105))))));
    var_24 = ((9 ? 51 : -52));
    #pragma endscop
}
