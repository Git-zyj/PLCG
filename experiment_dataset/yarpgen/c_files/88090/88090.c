/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [6] [i_1] [i_1] = ((~(max((arr_12 [i_0] [i_4] [i_4] [i_4] [i_0 + 3] [i_0]), (arr_12 [i_0] [i_4] [1] [i_2] [i_2] [i_0])))));
                                var_10 = arr_7 [i_0] [i_1] [i_2] [20];
                                var_11 -= max(((((var_1 + 9223372036854775807) >> (4283295669 - 4283295645)))), ((((((arr_10 [i_1]) ? 3132861395143338242 : (arr_1 [i_2] [i_3])))) ? (~var_7) : (((~(arr_12 [i_2] [i_3] [i_2] [i_0] [i_1] [i_2])))))));
                                var_12 = ((((2291339170378563490 / (arr_10 [i_0]))) * (arr_1 [i_0] [i_0])));
                                var_13 = (((((-(((arr_7 [i_0] [7] [i_1] [i_2]) + 17))))) % ((~(arr_8 [i_3 - 1] [i_0] [i_3])))));
                            }
                        }
                    }
                }
                var_14 ^= arr_8 [i_0] [i_1] [i_0];
            }
        }
    }
    var_15 = ((+(((~var_0) & (min(var_9, (-9223372036854775807 - 1)))))));
    var_16 = (max(var_16, 5601007537662578356));
    var_17 &= var_4;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_18 = (!var_8);
                var_19 = (arr_20 [i_5] [i_6]);
            }
        }
    }
    #pragma endscop
}
