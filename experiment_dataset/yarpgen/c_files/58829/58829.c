/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] = ((-(((arr_7 [i_0 + 2]) ? (13175 * 32053) : (((arr_5 [i_1 + 1] [i_0]) * 1446))))));
                            var_15 = ((arr_6 [i_1] [i_1]) >= (((-1450 | var_5) + ((max(56, -1444))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_16 = ((~(arr_0 [i_0] [i_1])));
                            arr_17 [i_0 + 2] [i_1] [i_5] [i_5] = ((((((arr_15 [i_4 - 2] [i_0 - 2] [i_1 + 1] [i_0 - 1] [i_4 - 2]) ^ (arr_15 [i_4 - 2] [i_0 - 2] [i_0 - 2] [i_5] [i_0 + 1])))) ? ((min(0, (arr_15 [i_4 - 2] [i_0 - 2] [i_0 - 3] [i_5] [i_5])))) : ((-13189 & (arr_15 [i_4 - 2] [i_0 - 2] [i_0 - 2] [i_1] [3])))));
                            var_17 *= arr_1 [i_0 + 1];
                        }
                    }
                }
            }
        }
    }
    var_18 = (((((max((~var_10), ((32053 ? -113 : 1446)))) + 2147483647)) << (((-97 & var_2) - 17394213163482963099))));
    #pragma endscop
}
