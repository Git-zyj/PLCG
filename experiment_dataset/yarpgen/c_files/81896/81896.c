/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 *= ((((min(var_10, (arr_5 [i_0] [i_1] [i_0])))) ? ((301017943 ? 15982949839597444646 : 15982949839597444646)) : 15982949839597444646));
                arr_6 [i_0] [i_1] [i_0] = -6465;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_20 = (min(var_20, (1 != 192576974)));
                            arr_17 [i_2] [i_5] = (min(var_4, (((var_14 || (!var_17))))));
                            var_21 -= ((((max(var_3, (~var_12)))) > ((~((4186478034 | (arr_7 [i_2])))))));
                            var_22 = (max(var_22, ((((((-(arr_11 [i_5] [i_4] [i_2])))) ? (arr_12 [i_3] [i_4]) : (((arr_3 [i_3] [i_4] [i_4]) | (((arr_1 [8]) << (((((arr_13 [i_2] [i_2] [i_2]) + 2071095915)) - 5)))))))))));
                        }
                    }
                }
                arr_18 [i_2] [i_3] = (((((arr_10 [5]) <= (arr_2 [1] [i_3]))) ? (arr_2 [1] [i_3]) : (-1806805745 / 6464)));
                arr_19 [i_2] = (!-1);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_23 *= -1806805745;
                            var_24 = (min(var_24, ((((((!4234321993221405169) ? (((arr_25 [i_2] [i_3] [i_3] [i_7] [i_7] [i_3]) ? var_3 : -6465)) : var_2)) >= (((!((!(arr_13 [i_3] [i_6] [i_7])))))))))));
                            var_25 ^= ((min(53434, (arr_2 [i_6] [i_3]))));
                            arr_26 [5] = ((((((!(var_17 / 42608))))) & ((~(~15982949839597444646)))));
                            var_26 = (min(var_26, (arr_11 [0] [12] [1])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            {
                var_27 *= var_18;
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_28 += (6975909922826510594 & 49);
                                arr_43 [i_12] [i_12] [i_11] [i_9] [i_10] [i_9] [i_8] = (((!var_9) ? ((min((~-1), var_16))) : 4));
                                var_29 = ((1323098802857921670 ? 2463794234112106981 : 1));
                                arr_44 [i_8] [i_9] [i_10] [i_11] [i_11] [1] [i_12] |= 1;
                            }
                        }
                    }
                }
                var_30 += (((((((arr_29 [i_8]) ? (arr_29 [14]) : (arr_32 [1] [i_9]))))) <= (!1806805742)));
            }
        }
    }
    #pragma endscop
}
