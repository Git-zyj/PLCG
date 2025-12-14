/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_2 ? (!var_6) : ((var_13 ? var_15 : (max(3, var_11)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 -= (~var_5);
                                var_19 += ((!((!(arr_9 [i_0] [0] [0])))));
                                var_20 ^= (((~(arr_1 [14]))));
                                arr_14 [9] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((min(65531, (arr_9 [0] [0] [0])))) ? (arr_7 [1] [1] [1] [1]) : 17301469019505546010));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_21 = (-7357902199941394767 && -7797446010748590057);
                    var_22 += 3527379776;
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_27 [5] [5] [16] [5] [16] = (min(28615, 18446744073709551615));
                                var_23 = (max(var_23, (((((((77 && (arr_0 [i_7 - 1]))))) >= (((arr_13 [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 1]) ? var_14 : 14642528619677784418)))))));
                                arr_28 [0] [1] [11] [1] [16] &= var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
