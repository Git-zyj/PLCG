/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2027664719;
    var_16 = ((var_4 ? (~var_10) : (((114 ? 0 : -18775)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = 1;
                                var_18 ^= (max(3029316382, ((-((((arr_5 [i_0] [i_0] [i_0] [18]) && var_2)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_19 = ((~((+(((arr_17 [i_0] [i_6] [i_5] [i_6] [i_7] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_16 [i_0] [i_5])))))));
                                arr_20 [7] [i_0] = 32905;
                                var_20 -= (~255);
                                var_21 = (arr_3 [i_0] [i_0]);
                            }
                        }
                    }
                }
                var_22 |= (arr_18 [6] [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
