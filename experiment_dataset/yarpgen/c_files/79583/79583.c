/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (0 > var_1);
    var_11 = ((+((((33352 % var_2) == (var_8 & 18513))))));
    var_12 = ((-var_8 & (var_1 > var_5)));
    var_13 = -5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((min((min((arr_4 [i_1]), (arr_2 [i_1]))), (arr_3 [16] [i_0] [i_0]))) >= (arr_4 [i_1 + 2]))))));
                var_15 ^= (((-177178927 + 2147483647) << (772641180 - 772641180)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] = (((arr_5 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 - 1]) & (min((var_4 << 0), (((11376205841080415757 || (arr_6 [i_3] [i_0] [i_0]))))))));
                                arr_12 [i_1] = (((-(((arr_5 [i_0] [i_0] [i_2] [i_0]) ? (arr_10 [i_0] [i_4] [i_2] [i_3] [i_4]) : (arr_7 [14] [i_1]))))) >= -1639078275);
                            }
                            for (int i_5 = 1; i_5 < 19;i_5 += 1)
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_5] [i_5] [i_5] = ((arr_3 [7] [7] [i_3]) ^ ((-(min((arr_14 [i_0] [i_1] [i_2] [i_2] [i_5 + 2]), (arr_14 [i_0] [17] [i_0] [i_3] [i_5 + 2]))))));
                                arr_18 [i_3] [i_3] [i_2] [i_1] [i_5] = var_6;
                            }
                            arr_19 [i_0] [i_0] [i_2] [i_1] = (max((!0), 246));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
