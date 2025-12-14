/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_2] [i_1] = (((max((arr_9 [i_0] [10] [i_3 + 1]), (0 - var_4))) != (((((!var_11) != (arr_8 [0] [i_1 - 2] [0])))))));
                            var_12 = ((((((arr_6 [i_1 - 1] [i_3] [i_3 + 2]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1])))) ? var_10 : ((((arr_6 [i_1 + 1] [10] [8]) << 0)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_13 = (arr_18 [i_0] [i_5] [i_0] [i_5 + 1] [i_4] [i_6 + 4]);
                                arr_21 [i_0] [i_1] [i_4] [i_5] [i_6] [i_4] [i_1 + 1] = (1 & 1);
                                var_14 = (max(var_14, (((((~(arr_14 [i_6] [i_1 - 2] [i_1] [i_0]))) << (var_8 - 1950557557416667192))))));
                            }
                        }
                    }
                }
                var_15 -= ((((-(!var_10)))) ? var_1 : (arr_9 [i_0] [i_1 - 2] [i_1 - 1]));
                arr_22 [i_0] = (((~16695316957287403962) >> 1));
            }
        }
    }
    var_16 = (((-var_4 - (var_6 < var_3))));
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                var_17 = ((min(1, 127)));
                arr_27 [i_7] [i_7] = 2078052065986062922;
            }
        }
    }
    #pragma endscop
}
