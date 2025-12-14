/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_10 = (min(228006456, 8387584));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_11 = ((1 * 30590) ? (arr_7 [i_1 + 2] [i_1 - 2] [i_1 - 1] [i_2]) : ((max((max(3401543644, var_4)), (var_3 / var_0)))));
                            var_12 = (max(var_12, (((1 < (arr_5 [i_2] [i_0] [i_0]))))));
                            arr_15 [i_4] = 1;
                        }
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_2] [8] [i_2] = 4240235172802774500;
                            var_13 ^= ((((((arr_12 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2]) ? 59 : (arr_11 [i_1 - 2] [i_1 + 2])))) ? (((arr_11 [i_1 + 2] [i_1 - 2]) ? (-32767 - 1) : 59)) : ((7867530817117991847 ? var_1 : (arr_12 [i_1 + 1] [i_1 + 2] [i_1 - 2] [i_1 - 1] [i_1])))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_6] [i_0] [i_1] = (arr_7 [i_6 - 4] [i_7 + 1] [i_1 + 1] [5]);
                                var_14 = (min(var_14, (((((112 ? -2704956370 : (arr_1 [i_1 + 2] [i_6 - 3])))) ? (((((arr_10 [i_0] [i_1] [i_6] [9]) | 893423652)))) : (max((~16), (arr_8 [i_7] [i_6 - 4] [i_1] [i_0])))))));
                            }
                        }
                    }
                    var_15 += -0;
                }
            }
        }
        arr_26 [i_0] [i_0] = ((8176 ? 127 : 1));
    }
    var_16 = (+-544335046);
    #pragma endscop
}
