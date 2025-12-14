/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = ((-(max((58320 > 1006644480072645772), ((~(arr_0 [i_0] [i_0])))))));
                var_16 ^= (arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 1]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 *= (max(var_8, (((((-29254 ? var_8 : (arr_6 [i_0] [i_1] [i_2] [i_0 - 3])))) ? (((arr_5 [i_0] [4] [i_2]) ? 0 : 18342380778404872144)) : (var_13 + var_10)))));
                                var_18 = ((((((min((arr_7 [i_0] [i_2] [7]), 17758773510611264690))) ? (arr_4 [i_0] [i_3] [17]) : (0 > 64145))) != (arr_11 [i_0] [1] [i_2] [i_2] [1] [i_2] [i_3])));
                                var_19 ^= (((((1 ? 15185900845455543172 : (-32767 - 1)))) ? 5186084399501005553 : 32760));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
