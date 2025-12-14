/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(217, var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (((-795652723 - 35609) + 35606));
                arr_7 [i_0] [i_1] = 38;
            }
        }
    }
    var_20 &= ((var_17 ? (((var_12 ? var_17 : -1307696711))) : 35609));
    var_21 = var_12;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    var_22 = (((arr_5 [21] [i_4 + 3]) % (arr_5 [i_4] [i_4 + 1])));
                    arr_15 [10] [i_4] [i_4] = ((max(var_8, (arr_14 [i_4 + 3] [i_4 + 1] [i_4]))));
                    var_23 *= (min(((((min(var_10, 16564))) / -64)), (((arr_12 [11] [i_3]) / ((35606 ? 124 : -1242401448))))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_24 = ((((32763 ? (((arr_10 [i_2] [i_2]) * var_15)) : (arr_4 [14] [i_3]))) / (arr_4 [i_7] [i_2])));
                                var_25 = var_1;
                                arr_25 [6] = (((((32757 ? var_13 : 217))) ? (((max(255, (arr_8 [13]))))) : (arr_13 [3] [13] [i_5] [i_5])));
                                var_26 += ((((min(var_12, 35613)))));
                            }
                        }
                    }
                    var_27 = var_17;
                    arr_26 [8] [8] [i_2] |= 0;
                }
                var_28 = ((~((-(arr_0 [i_2] [i_3])))));
                var_29 ^= ((min(-308507752731802258, ((((arr_16 [i_2] [7] [i_2] [7]) % 502777593))))));
            }
        }
    }
    #pragma endscop
}
